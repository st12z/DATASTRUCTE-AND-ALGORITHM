#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,m,u;
int color[1001];
int check;
void init(){
    cin>>n>>m;
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
void bfs(int i){
    queue<int>q;
    q.push(i);
    color[i]=-1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int x:adj[u]){
            if(color[x]==0){
                color[x]=-color[u];
                q.push(x);
            }
            else{
                if(color[x]==color[u]){
                    check=0;
                    return;
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        for(int i=1;i<=n;i++){
            if(color[i]==0){
                bfs(i);
            }
        }
        if(check) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    } 
    system("pause");
}


