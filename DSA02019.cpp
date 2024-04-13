#include <bits/stdc++.h>
using namespace std;
vector<int>adj[21];
int n,m;
int visited[21][21]={0};
int path=-1e9;
void dfs(int u,int d){
    for(int x:adj[u]){
        if(visited[u][x]==0){
            visited[u][x]=visited[x][u]=1;
            
            dfs(x,d+1);
            visited[u][x]=visited[x][u]=0;   
        }
    }
    if(d>path) path=d;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<=20;i++) adj[i].clear();
        path=-1e9;
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i=0;i<n;i++){
            memset(visited[i],0,sizeof(visited[i]));
            visited[i][i]=1;
            dfs(i,0);
        }
        cout<<path;
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321