#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cp[1001][1001];
int n,m;
int u;
int visited[1001];
ll d[1001];
void init(){
    memset(d,0,sizeof(d));
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=1000;i++){
        memset(cp[i],-1,sizeof(cp[i]));
    }
    cin>>n>>m>>u;
    for(int i=1;i<=m;i++){
        int x,y,z;
        cin>>x>>y>>z;
        cp[x][y]=z;
        cp[y][x]=z;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(cp[i][j]==-1){
                cp[i][j]=INT_MAX;
            }
        }
        cp[i][i]=0;
    }
}
void dijsktra(int s){
    visited[s]=1;
    d[s]=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]) d[i]=cp[s][i];
    }
    int t=n-1;
    while(t--){
        int min=INT_MAX;
        int u;
        for(int i=1;i<=n;i++){
            if(visited[i]==0 && d[i]<min){
                min=d[i];
                u=i;
            }
        }
        visited[u]=1;
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                if(d[u]+cp[u][i]<d[i]){
                    d[i]=d[u]+cp[u][i];
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