#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int visited[1001];
int n,m,u;
void init(){
    cin>>n>>m>>u;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        adj[i].clear();
    }
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int u){
    visited[u]=1;
    cout<<u<<" ";
    for(int x:adj[u]){
        if(visited[x]==0){
            dfs(x);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dfs(u);
        cout<<"\n";
    }
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321