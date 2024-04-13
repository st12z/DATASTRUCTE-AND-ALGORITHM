#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Node{
    int data;
    Node *left,*right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
int height=0;
int Find(struct Node* root){
    if(root==NULL){
        return 0;
    }
    int a=Find(root->left);
    int b=Find(root->right);
    if(a>b) return a+1;
    else return b+1;
}
int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);

    cout<<Find(root);
    system("pause");
}
// 1 9 16 25 64
// 
