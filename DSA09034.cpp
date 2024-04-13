#include <bits/stdc++.h>
using namespace std;
char a[101][101];
int visited[101][101];
int n,m;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>a[i][j];
    }
    for(int i=1;i<=100;i++) memset(visited[i],0,sizeof(visited[i]));
}
void dfs(int x,int y){
    visited[x][y]=1;
    for(int i=0;i<8;i++){
        int x1=x+dx[i];
        int y1=y+dy[i];
        if(x1>=1 && x1<=n && y1>=1 && y1<=m && visited[x1][y1]==0 && a[x1][y1]=='W'){
            dfs(x1,y1);
        }
    }
}
int main(){
    init();
    int cnt=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='W' && visited[i][j]==0){
                cnt++;
                dfs(i,j);
            }
        }
    }
    cout<<cnt;
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321