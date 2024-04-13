#include <bits/stdc++.h>
using namespace std;
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
void makeNode(Node* root,int u,int v,char c){
    if(c=='L'){
        root->left=new Node(v);
    }
    else{
        root->right=new Node(v);
    }
}
void InsertNode(Node *root,int u,int v,char c){
    if(root==NULL) return;
    if(root->data==u){
        makeNode(root,u,v,c);
    }
    InsertNode(root->left,u,v,c);
    InsertNode(root->right,u,v,c);
}
int cnt=0;
int inorder(Node *root){
    if(root==NULL) return 1;
    if((root->left==NULL && root->right!=NULL) || (root->left!=NULL && root->right==NULL)) return 0;
    return inorder(root->left) && inorder(root->right);

}
int main(){
    int n;
    cin>>n;
    Node* root=NULL;
    for(int i=1;i<=n;i++){
        int u,v;
        char c;
        cin>>u>>v>>c;
        if(root==NULL){
            root=new Node(u);
            makeNode(root,u,v,c);
        }
        else{
            InsertNode(root,u,v,c);
        }
    }
    if(inorder(root)) cout<<"YES";
    else cout<<"NO";
	system("pause");
}
