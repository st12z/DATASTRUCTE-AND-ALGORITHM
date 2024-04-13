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
void makeRoot(Node *root,int u,int v,char c){
    if(c=='L'){
        root->left=new Node(v);
    }
    else{
        root->right=new Node(v);
    }
}
void InsertRoot(Node *root,int u,int v,int c){
    if(root==NULL) return;
    if(root->data==u){
        makeRoot(root,u,v,c);
        return;
    }
    InsertRoot(root->left,u,v,c);
    InsertRoot(root->right,u,v,c);
}
int sum=0;
void sumNode(Node*root,int mode){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        if(mode==1) sum+=root->data;
    }
    if(root->left!=NULL){
        sumNode(root->left,-1);
    }
    if(root->right!=NULL){
        sumNode(root->right,1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *root=NULL;
        for(int i=1;i<=n;i++){
            int u,v;char c;
            cin>>u>>v>>c;
            if(root==NULL){
                root=new Node(u);
                makeRoot(root,u,v,c);
            }
            else{
                InsertRoot(root,u,v,c);
            }
        }
        sum=0;
        sumNode(root,1);
        cout<<sum;
        cout<<"\n";
    }
    system("pause");
}

