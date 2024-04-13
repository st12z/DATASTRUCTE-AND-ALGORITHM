#include <bits/stdc++.h>
using namespace std;
#define ll long long
int d[1005][1005];
int n,m;
void init(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) d[i][j]=0;
    }
    for(int i=1;i<=m;i++){
        int x,y,w;
        cin>>x>>y>>w;
        d[x][y]=w;
        d[y][x]=w;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(d[i][j]==0){
                d[i][j]=1e9;
            }
        }
        d[i][i]=0;
    }
}
int main(){
    init();
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(d[i][j]>d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<d[i][j]<<" ";
        cout<<"\n";
    }
}
