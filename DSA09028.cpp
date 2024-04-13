#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int visited[11];
vector<int>adj[11];
int color[11];

int k;
stack<int>st;
void init(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        adj[i].clear();
    }
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++) color[i]=1;
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
            if(color[x]==color[u]) color[x]=color[u]+1;
            dfs(x);
        }
        else if(color[x]==color[u]){
            color[u]=color[x]+1;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dfs(2);
        int cnt=*max_element(color+1,color+n+1);;
        if(cnt<=k) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
}