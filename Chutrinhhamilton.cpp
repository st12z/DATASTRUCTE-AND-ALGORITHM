#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int n,m;
int visited[1001];
int u[1001];
int check=0;
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    check=0;
}
void result(){
    for(int i=0;i<=n;i++) cout<<u[i]<<" ";
    cout<<"\n";
}
void hamilton(int k){
    for(int x:adj[u[k-1]]){
        if(visited[x]==0){
            u[k]=x;
            visited[x]=1;
            if(k<n){
                hamilton(k+1);
            }
            visited[x]=0;
        }
        else{
            if(k==n && u[0]==x){
                u[k]=u[0];
                result();
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
                u[0]=i;
                visited[i]=1;
                hamilton(1);
                visited[i]=0;
        }
        cout<<"\n";
    } 
    system("pause");
}


