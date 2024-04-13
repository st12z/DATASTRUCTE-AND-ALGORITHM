#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int visited[1001];
int parent[1001];
int n,m,s,t;
int check;
void init(){
    cin>>n>>m;
    check=0;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        adj[i].clear();
    }
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
int main(){
    int k;
    cin>>k;
    while(k--){
        init();
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                queue<int>q;
                q.push(i);
                cnt++;
                visited[i]=1;
                while(!q.empty()){
                    int u=q.front();
                    q.pop();
                    for(int x:adj[u]){
                        if(visited[x]==0){
                            q.push(x);
                            visited[x]=1;
                        }
                    }
                }
            }
        }
        cout<<cnt;
        cout<<"\n";
    }
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321