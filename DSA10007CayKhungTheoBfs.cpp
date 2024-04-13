#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,m,u;
int color[1001];
int check;
void init(){
    cin>>n>>m>>u;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(color,0,sizeof(color));
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    check=1;
}
void bfs(){

}
int main(){
    int t;
    cin>>t;
    while(t--){
        
    } 
    system("pause");
}


