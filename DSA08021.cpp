#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        int d[n+1][m+1]={};
        int visited[n+1][m+1]={};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        queue<pair<int,int>>q;
        q.push({1,1});
        int check=0;
        while(!q.empty()){
            pair<int,int>top=q.front();
            q.pop();
            int value=a[top.first][top.second];
            int x1=top.first,y1=top.second+value;
            int x2=top.first+value,y2=top.second;
            if(x1<=n && x1>=1 && y1<=m && y1>=1 && visited[x1][y1]==0){
                q.push({x1,y1});
                d[x1][y1]=d[top.first][top.second]+1;
                visited[x1][y1]=1;
            }
            if(x1==n && y1==m){
                check=1;
                d[x1][y1]=d[top.first][top.second]+1;
                break;
            }
            if(x2<=n && x2>=1 && y2<=m && y2>=1 && visited[x2][y2]==0){
                q.push({x2,y2});
                d[x2][y2]=d[top.first][top.second]+1;
                visited[x2][y2]=1;
            }
            if(x2==n && y2==m){
                d[x2][y2]=d[top.first][top.second]+1;
                check=1;
                break;
            }
            
        }
        if(check==1) cout<<d[n][m];
        else cout<<-1;
        cout<<"\n";
    }
}