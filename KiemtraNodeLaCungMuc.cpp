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
int height(Node *root){
    if(root==NULL) return 0;
    return max(height(root->left),height(root->right))+1;
}
int check(Node *root){
    queue<Node*>q;
    q.push(root);
    int cnt=0;
    while(!q.empty()){
        int s=q.size();
        if(s!=(int)pow(2,cnt)) return 0;
        for(int i=0;i<s;i++){
            Node *u=q.front();
            q.pop();
            if(u->left!=NULL) q.push(u);
            if(u->right!=NULL) q.push(u);
        }
        cnt++;
    }
    return 1;
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
    cout<<check(root);
	system("pause");
}

