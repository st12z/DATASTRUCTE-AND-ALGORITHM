#include <bits/stdc++.h>
using namespace std;
int a[1001];
int n;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data=x;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(Node *root,int x){
    if(root==NULL){
        Node* temp=new Node(x);
        return temp;
    }
    if(x<root->data){
        root->left=buildTree(root->left,x);
    }
    else{
        root->right=buildTree(root->right,x);
    }
    return root;
}
void PreOrder(Node *root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        Node* root=new Node(a[1]);
        for(int i=2;i<=n;i++){
            root=buildTree(root,a[i]);
        }
        PreOrder(root);
        cout<<"\n";
    }
	system("pause");
}

