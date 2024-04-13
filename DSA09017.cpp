#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>adj[1001];
int visited[1001]={0};
int parent[1001]={0};
int check=0;
void dfs(int u){
    if(check==1) return;
    visited[u]=1;
    for(int x:adj[u]){
        if(visited[x]==0 &&check==0){
            parent[x]=u;
            dfs(x);
        }
        else if(x!=parent[u]){
            check=1;
            return;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        check=0;
        for(int i=1;i<=n;i++){
            adj[i].clear();
        }
        memset(visited,0,sizeof(visited));
        memset(parent,0,sizeof(parent));
        for(int i=1;i<=n-1;i++){
            int x, y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1);
        for(int i=1;i<=n;i++){
            if(visited[i]==0) check=1;
        }
        if(check==1){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
        cout<<"\n";
    }
}