#include <bits/stdc++.h>
using namespace std;
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
void duyet(Node *root){
    queue<Node*>q;
    q.push(root);
    if(root!=NULL)cout<<root->data<<" ";
    while(!q.empty()){
        Node *temp=q.front();
        q.pop();
        if(temp->left!=NULL){
            cout<<temp->left->data<<" ";
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            cout<<temp->right->data<<" ";
            q.push(temp->right);
        }
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
        duyet(root);
        cout<<"\n";
    }
    system("pause");
}