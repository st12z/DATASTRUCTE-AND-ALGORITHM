#include <bits/stdc++.h>
using namespace std;
struct edge{
    int x,y,w;
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int d=0;
        cin>>n>>m;
        vector<pair<int,int>>adj[n+1];
        int visited[n+1]={0};
        vector<edge>MST;
        visited[1]=1;
        for(int i=1;i<=m;i++){
            int x,y,z;
            cin>>x>>y>>z;
            adj[x].push_back({y,z});
            adj[y].push_back({x,z});
        }
        while(MST.size()<n-1){
            int X,Y;
            int min=1e9;
            for(int i=1;i<=n;i+=1){
                if(visited[i]==1){
                    for(pair<int,int>p:adj[i]){
                        int j=p.first;
                        int ts=p.second;
                        if(visited[p.first]==0 && ts<min){
                            min=ts;
                            X=j;
                            Y=i;
                        }
                    }
                }
            }
            MST.push_back({X,Y,min});
            d+=min;
            visited[X]=1;
        }
        cout<<d<<"\n";
    }
}


