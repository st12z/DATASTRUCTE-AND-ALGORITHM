#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,m;
int visited[1001];
int parent[1001];
int check=0;
int v;
void init(){
    check=0;
    for(int i=1;i<=1000;i++) adj[i].clear();
    memset(visited,0,sizeof(visited));
    memset(parent,0,sizeof(parent));
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(),adj[i].end());
    }
}
void dfs(int u){
    visited[u]=1;
    for(int x:adj[u]){
        if(!visited[x]){
            parent[x]=u;
            dfs(x);
        }
        else if(parent[u]!=x && x==1){
            v=u;
            check=1;
            return;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dfs(1);
        if(check==0) cout<<"NO";
        else{
            vector<int>res;
            res.push_back(1);
            while(1!=v){
                res.push_back(v);
                v=parent[v];
            }
            res.push_back(1);
            reverse(res.begin(),res.end());
            for(int x:res) cout<<x<<" ";
        }
        cout<<"\n";
    }
}