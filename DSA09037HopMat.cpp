#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int k,n,m;
int visited[1001];
int dem[1001];
int pos[1001];
int check;
void init(){
    cin>>k>>n>>m;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(visited,0,sizeof(visited));
    memset(dem,0,sizeof(dem));
    for(int i=1;i<=k;i++) cin>>pos[i];
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    check=1;
}
void dfs(int u){
    visited[u]=1;
    dem[u]++;
    for(int x:adj[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
void solve(){
    for(int i=1;i<=k;i++){
        memset(visited,0,sizeof(visited));
        dfs(pos[i]);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(dem[i]>=k) cnt++;
    }
    cout<<cnt;
}
int main(){
    init();
    solve();
    cout<<"\n";
    system("pause");
}


