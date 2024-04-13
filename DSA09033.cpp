#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int>adj[100001];
int visited[100001];
void init(){
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

}
void bfs(){
    queue<int>q;
    q.push({1})
}
int main(){
    int k;
    cin>>k;
    while(k--){
        init();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                check=0;
                if(a[i][j]==1 && mark[i][j]==0){
                    dfs(i,j);
                    if(check==0){
                        
                    }
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