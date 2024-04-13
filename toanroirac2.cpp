#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int visited[15]={};
int n,u;
void bfs(int u){
    queue<int>q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int top=q.front();
        cout<<top<<" ";
        q.pop();
        for(int i=1;i<=n;i++){
            if(visited[i]==0 && a[top][i]==1){
                q.push(i);
                visited[i]=1;
            }
        }
    }
}
int main(){
    cin>>n>>u;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
    bfs(u);
}