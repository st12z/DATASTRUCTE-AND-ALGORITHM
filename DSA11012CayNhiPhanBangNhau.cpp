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
int check(Node* root1,Node* root2){
    if(root1==NULL && root2==NULL) return 1;
    if(root1->data != root2->data) return 0;
    return check(root1->left,root2->left) && check(root1->right,root2->right);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        se.clear();
        int n;
        cin>>n;
        Node *root1=NULL;
        for(int i=1;i<=n;i++){
            int u,v;
            char c;
            cin>>u>>v>>c;
            if(root1==NULL){
                root1=new Node(u);
                makeRoot(root1,u,v,c);
            }
            else{
                insertNode(root1,u,v,c);
            }
        }
        cin>>n;
        Node *root2=NULL;
        for(int i=1;i<=n;i++){
            int u,v;
            char c;
            cin>>u>>v>>c;
            if(root2==NULL){
                root2=new Node(u);
                makeRoot(root2,u,v,c);
            }
            else{
                insertNode(root2,u,v,c);
            }
        }
        if(check(root1,root2)) cout<<"1";
        else cout<<"0";
        cout<<"\n";
    }
    system("pause");
}