#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>adj[1001];
int visited[1001]={0};
int parent[1001]={0};
int check=0;
void dfs(int u){
    visited[u]=1;
    for(int v:adj[u]){
        if(visited[v]==0 &&check==0){
            parent[v]=u;
            dfs(v);
        }
        else if(visited[v]==1){
            check=1;
            return;
        }
    }
    visited[u]=2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=1001;i++){
            adj[i].clear();
        }
        memset(visited,0,sizeof(visited));
        for(int i=1;i<=m;i++){
            int x, y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        check=0;
        for(int i=1;i<=n;i++){
            if(visited[i]==0 && check==0){
                dfs(i);
            }
        }
        if(check==1) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}