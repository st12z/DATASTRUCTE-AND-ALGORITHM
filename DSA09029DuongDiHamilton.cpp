#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int>adj[11];
int visited[11];
int x[11];
int check;
void init(){
    check=0;
    cin>>n>>m;
    for(int i=1;i<=10;i++) adj[i].clear();
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void hamiton(int u,int i){
    for(int v:adj[u]){
        if(visited[v]==0){
            visited[v]=1;
            x[i]=v;
            if(i<n) hamiton(v,i+1);
            else{
                check=1;
                return;
            }
            visited[v]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        for(int i=1;i<=n;i++){
            memset(visited,0,sizeof(visited));
            if(check==0){
                visited[i]=1;
                hamiton(i,2);
            }
            else{
                break;
            }
        }
        if(check) cout<<1;
        else cout<<0;
        cout<<"\n";
    }
    system("pause");
}