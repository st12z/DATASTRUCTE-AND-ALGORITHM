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
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *root=NULL;
        for(int i=1;i<=n;i++){
            int u,v;
            cin>>u>>v>>c;
            if(root==NULL){
                root=new Node(u);
                makeRoot(root,u,v,c);
            }
            else{
                InsertRoot(root,u,v,c);
            }
        }
        queue<Node*>q;
        q.push(root);
        vector<int>result;
        while(!q.empty()){
            Node* u=q.front();
            result.push_back(u->data);
            q.pop();
            if(u->left!=NULL){
                q.push(u->left);
            }
            if(u->right!=NULL){
                q.push(u->right);
            }
        }
        for(int x:result) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}

