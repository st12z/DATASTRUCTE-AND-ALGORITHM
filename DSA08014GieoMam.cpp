#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct data{
    int x,y,t;
};
int main(){
    int t;
    cin>>t;
    int dx[]={-1,0,1,0};
    int dy[]={0,1,0,-1};
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]==1) cnt++;
            }
        }
        int visited[n][m]={};
        queue<struct data>q;
        struct data u;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==2){
                    u.x=i;
                    u.y=j;
                    u.t=0;
                    q.push(u);
                }
            }
        }
        int check=0;
        while(!q.empty() &&check==0){
            auto top=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int x=top.x+dx[i];
                int y=top.y+dy[i];
                if(x<n && x>=0 && y<m && y>=0 && a[x][y]==1){
                    cnt-=1;
                    if(cnt==0){
                        check=1;
                        cout<<top.t+1;
                        break;
                    }
                    a[x][y]=2;
                    u.x=x;
                    u.y=y;
                    u.t=top.t+1;
                    q.push(u);
                }
            }
        }
        if(check==0) cout<<-1;
        cout<<"\n";
    }
    system("pause");
}
