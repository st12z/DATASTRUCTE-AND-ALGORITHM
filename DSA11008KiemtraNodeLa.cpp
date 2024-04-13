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
void check(Node*root,int bac){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        se.insert(bac);
    }
    check(root->left,bac+1);
    check(root->right,bac+1);
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
        check(root,0);
        if(se.size()==1) cout<<"1";
        else cout<<"0";
        cout<<"\n";
    }
    system("pause");
}