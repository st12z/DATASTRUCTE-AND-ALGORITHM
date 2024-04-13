#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int>adj[1001];
int visited[1001];
int parent[1001];
int check;
void init(){
    check=0;
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    for(int i=0;i<=1000;i++){
        adj[i].clear();
    }
    memset(parent,0,sizeof(parent));
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
}
void dfs(int u){
    visited[u]=1;
    for(int x:adj[u]){
        if(visited[x]==0){
            parent[x]=u;
            dfs(x);
        }
        else if(parent[x]!=u && visited[x]==1){
            check=1;
        }
    }
    visited[u]=2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        for(int i=1;i<=n;i++){
            if(visited[i]==0 && check==0){
                dfs(i);
            }
        }
        if(check) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}