#include <bits/stdc++.h>
using namespace std;
set<int>se;
struct Node{
    Node *left;
    Node *right;
    int data;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
void insertNode(Node *root,int x){
    
    if(x<root->data){
        if(root->left==NULL){
            root->left=new Node(x);
            return;
        }
        insertNode(root->left,x);
    }
    else{
        if(root->right==NULL){
            root->right=new Node(x);
            return;
        }
        insertNode(root->right,x);
    }
}
void postOrder(Node *root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        Node *root=NULL;
        for(int &x:a) cin>>x;
        root=new Node(a[0]);
        for(int i=1;i<n;i++){
            insertNode(root,a[i]);
        }
        postOrder(root);        
        cout<<"\n";
    }
    system("pause");
}