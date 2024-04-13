#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,u;
        cin>>n>>m>>u;
        vector<pair<int,int>>adj[n+1];
        int visited[n+1]={0};
        int d[n+1];
        for(int i=1;i<=n;i++){
            d[i]=1e9;
        }
        d[u]=0;
        for(int i=1;i<=m;i++){
            int x,y,z;
            cin>>x>>y>>z;
            adj[x].push_back({y,z});
            adj[y].push_back({x,z});
        }
        queue<pair<int,int>>q;
        q.push({u,0});
        while(!q.empty()){
            pair<int,int> top=q.front();
            q.pop();
            if(top.second)
            for(pair<int,int> x:adj[top]){
                if(x.first!=u){
                    if(d[top]+d[x.second]<d[x.first]){

                    }
                }
            }
        }
        for(int i=1;i<=n;i++) cout<<d[i]<<" ";
        cout<<"\n";
    }
}


