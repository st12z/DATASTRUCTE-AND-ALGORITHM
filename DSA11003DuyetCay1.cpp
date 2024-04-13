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
int n;
int inOder[1001],preOder[1001];
int find(int a[],int x){
    for(int i=1;i<=n;i++){
        if(a[i]==x) return i;
    }
    return -1;
}
void buildTree(Node* root,int left,int right){
    int in_pos=find(inOder,root->data);
    int pre_pos=find(preOder,root->data);
    if(in_pos>left){
        root->left=new Node(preOder[pre_pos+1]);
        buildTree(root->left,left,in_pos-1);
    }
    if(in_pos<right){
        int sl=in_pos-left+1;
        int pos_right=pre_pos+sl;
        root->right=new Node(preOder[pos_right]);
        buildTree(root->right,in_pos+1,right);
    }
}
void postOder(Node*root){
    if(root==NULL) return  ;
    postOder(root->left);
    postOder(root->right);
    cout<<root->data<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>inOder[i];
        for(int i=1;i<=n;i++) cin>>preOder[i];
        Node *root=new Node(preOder[1]);
        buildTree(root,1,n);
        postOder(root);
    }
	system("pause");
}

