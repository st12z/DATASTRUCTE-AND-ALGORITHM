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
    queue<struct Node*>q;
    q.push(root);
    cout<<root->data<<"\n";
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            cout<<temp->left->data<<" ";
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
            cout<<temp->right->data;
        }
        cout<<"\n";
    }
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
