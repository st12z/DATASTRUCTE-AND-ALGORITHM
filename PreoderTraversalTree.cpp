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
void printInorder(struct Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    printInorder(root->left);
    
    printInorder(root->right);
}
int main(){
    struct Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    printInorder(root);
    system("pause");
}
// 1 9 16 25 64
// 
