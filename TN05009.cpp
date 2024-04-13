#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,m;
int parent[1001];
int visited[1001];
int check=0;
int p,q;
void init(){
    cin>>n>>m;
    check=0;
    memset(visited,0,sizeof(visited));
    memset(parent,0,sizeof(parent));
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
    if(check==1) return;
    visited[u]=1;
    for(int x:adj[u]){
        if(visited[x]==0){
            parent[x]=u;
            dfs(x);
        }
        else{
            if(x==1 && parent[u]!=1){
                q=u;
                check=1;
                return;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dfs(1);
        if(check==1){
            vector<int>ve;
            while(1!=q){
                ve.push_back(q);
                q=parent[q];
            }
            ve.push_back(1);
            reverse(ve.begin(),ve.end());
            for(int x:ve) cout<<x<<" ";
            cout<<1;
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321