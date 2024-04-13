#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int u,v,s,t;
        char a[n+1][n+1];
        for(int i=0;i<=n-1;i++){
            for(int j=0;j<=n-1;j++) cin>>a[i][j];
        }
        cin>>u>>v>>s>>t;
        int visited[n+1][n+1]={};
        queue<pair<int,int>>q;
        q.push({u,v});
        visited[u][v]=0;
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            if(top.first==s && top.second==t){
                cout<<visited[s][t];
                break;
            }
            int x=top.first;
            int y=top.second;
            for(int i=0;i<n;i++){
                if(a[x][i]=='X') break;
                if(visited[x][i]==0 && a[x][i]=='.' && y!=i){
                    q.push({x,i});
                    visited[x][i]=visited[x][y]+1;
                }
            }
            for(int i=0;i<n;i++){
                if(a[i][y]=='X') break;
                if(visited[i][y]==0 && a[i][y]=='.' && i!=x){
                    q.push({i,y});
                    visited[i][y]=visited[x][y]+1;
                }
            }
        }
        cout<<"\n";
    }
    system("pause");
}
