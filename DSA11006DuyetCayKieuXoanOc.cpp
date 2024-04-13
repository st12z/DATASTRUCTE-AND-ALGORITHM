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
void duyet(Node *root){
    queue<Node*> q;
    int cnt=1;
    q.push(root);
    cout<<root->data<<" ";
    while(!q.empty()){
        vector<int>ve;
        int n=q.size();
        for(int i=0;i<n;i++){
            Node *temp=q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
                ve.push_back(temp->left->data);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
                ve.push_back(temp->right->data);
            }
        }
        if(cnt%2==0){
            for(int i=ve.size()-1;i>=0;i--) cout<<ve[i]<<" ";
        }
        else{
            for(int i=0;i<ve.size();i++) cout<<ve[i]<<" ";
        }
        cnt++;
    }
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
        duyet(root);
        cout<<"\n";
    }
    system("pause");
}