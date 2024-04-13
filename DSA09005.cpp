#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,u;
        queue<int>q;
        cin>>n>>m>>u;
        vector<int>adj[n+1];
        int visited[n+1]={0};
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        q.push(u);
        visited[u]=1;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            cout<<top<<" ";
            for(int x:adj[top]){
                if(visited[x]==0){
                    visited[x]=1;
                    q.push(x);
                }
            }
        }
        cout<<"\n";
    }
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321