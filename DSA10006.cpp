#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,m,u;
int visited[1001];
vector<pair<int,int>>ve;
void init(){
    cin>>n>>m>>u;
    for(int i=1;i<=n;i++) adj[i].clear();
    ve.clear();
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void dfs(int u){
    visited[u]=1;
    for(int x:adj[u]){
        if(visited[x]==0){
            ve.push_back({u,x});
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
        if(ve.size()==n-1){
            for(auto p:ve) cout<<p.first<<" "<<p.second<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
    } 
    system("pause");
}


