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
void makeRoot(Node *root,int u,int v,char c){
    if(c=='L') root->left=new Node(v);
    else root->right=new Node(v);
}
void insertNode(Node *root,int u,int v,char c){
    if(root==NULL) return;
    if(root->data==u){
        makeRoot(root,u,v,c);
    }
    insertNode(root->left,u,v,c);
    insertNode(root->right,u,v,c);
}
int check(Node*root){
    if(root==NULL) return 1 ;
    if((root->left!=NULL && root->right==NULL) ||(root->left==NULL && root->right!=NULL)) return 0;
    return check(root->left)  && check(root->right);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        se.clear();
        int n;
        cin>>n;
        Node *root=NULL;
        for(int i=1;i<=n;i++){
            int u,v;
            char c;
            cin>>u>>v>>c;
            if(root==NULL){
                root=new Node(u);
                makeRoot(root,u,v,c);
            }
            else{
                insertNode(root,u,v,c);
            }
        }
        if(check(root)) cout<<"1";
        else cout<<"0";
        cout<<"\n";
    }
    system("pause");
}