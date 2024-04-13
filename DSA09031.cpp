#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int visited[101][101];
int n,m,k;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
map<pair<int,int>,pair<int,int>>mp;

int cnt;
void init(){
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=0;
        }
    }
    for(int i=1;i<=n;i++){
        memset(visited[i],0,sizeof(visited[i]));
    }
    for(int i=1;i<=m;i++){
        int u,v,x,y;
        cin>>u>>v>>x>>y;
        mp[{u,v}]={x,y};
        mp[{x,y}]={u,v};
    }
    for(int i=1;i<=k;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
    }
}
void dfs(int x,int y){
    visited[x][y]=1;
    
    for(int i=0;i<4;i++){
        int x1=x+dx[i];
        int y1=y+dy[i];
        if(x1>=1 && x1<=n && y1>=1 && y1<=n && visited[x1][y1]==0){
            int p=mp[{x,y}].first;
            int q=mp[{x,y}].second;
            
            if(p!=x1 && q!=y1){
                if(a[x1][y1]==1) cnt++;
                
                dfs(x1,y1);
            }
        }
    }
}
int main(){
    init();
    vector<int>ve;
    int sl=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]==1 && visited[i][j]==0){
                cnt=1;
                dfs(i,j);
                ve.push_back(cnt);             
            }
        }
    }
    for(int i=0;i<ve.size()-1;i++){
        for(int j=i+1;j<=ve.size()-1;j++){
            sl+=ve[i]*ve[j];
        }
    }
    cout<<sl;
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321