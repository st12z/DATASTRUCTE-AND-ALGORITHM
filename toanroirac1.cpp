#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int visited[15]={};
int n,u;
void dfs(int u){
    visited[u]=1;
    cout<<u<<" ";
    for(int i=1;i<=n;i++){
        if(visited[i]==0 && a[u][i]==1){
            dfs(i);
        }
    }
}
int main(){
    cin>>n>>u;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
    dfs(u);
}