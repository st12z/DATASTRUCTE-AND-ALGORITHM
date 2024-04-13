#include <bits/stdc++.h>
using namespace std;
#define ll long long
int C[1005][1005];
int n,m;
int u;
int visited[1005];
ll d[1005];
void init(){
    memset(d,0,sizeof(d));
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=1000;i++){
        memset(C[i],0,sizeof(C[i]));
    }
    cin>>n>>m>>u;
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        C[x][y]=z;
        C[y][x]=z;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(C[i][j]==0){
                C[i][j]=1e9;
            }
        }
    }
}
void dijsktra(int s){
    visited[s]=1;
    for(int i=1;i<=n;i++){
        d[i]=C[s][i];
    }
    d[s]=0;
    int t=n-1;
    while(t--){
        int min=INT_MAX;
        int v;
        for(int i=1;i<=n;i++){
            if(visited[i]==0 && d[i]<min){
                min=d[i];
                v=i;
            }
        }
        visited[v]=1;
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                if(d[v]+C[v][i]<d[i]){
                    d[i]=d[v]+C[v][i];
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        dijsktra(u);
        for(int i=1;i<=n;i++) cout<<d[i]<<" ";
        cout<<"\n";
    }
    system("pause");
}