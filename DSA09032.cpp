#include <bits/stdc++.h>
using namespace std;
vector<int>adj[100001];
int visited[100001];
int n,m;
int check;
int cnt;
int maxvalue=-1e9;
void init(){
    cnt=0;
    maxvalue=-1e9;
    cin>>n>>m;
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
    cnt++;
    for(int x:adj[u]){
        if(visited[x]==0){
            dfs(x);
        }
    }
}
int main(){
    int k;
    cin>>k;
    while(k--){
        init();
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                cnt=0;
                dfs(i);
                if(cnt>maxvalue) maxvalue=cnt;
            }
        }
        cout<<maxvalue;
        cout<<"\n";
    }
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321