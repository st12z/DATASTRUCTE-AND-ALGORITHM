#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int>adj[1001];
vector<int>r_adj[1001];
stack<int>st;
int n,m;
int visited[1001];
int cnt=0;
int deg[1001];
queue<int>q;
void init(){
    memset(deg,0,sizeof(deg));
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        adj[i].clear();
    }
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        deg[y]++;
        adj[x].push_back(y);
    }
    for(int i=1;i<=n;i++){
        if(deg[i]==0) q.push(i);
    }
    memset(visited,0,sizeof(visited));
}
void kahn(){
    vector<int>ve;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        ve.push_back(u);
        for(int x:adj[u]){
            deg[x]--;
            if(deg[x]==0){
                q.push(x);
            }
        }
    }
    cout<<ve.size();
    if(ve.size()==n) cout<<"NO";
    else cout<<"YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        kahn();
        cout<<"\n";
    }
    system("pause");
}
// 152
// aebcde
// aecb
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
//{1, 15, 51, 45, 33, 100, 12, 18, 9}
//{1, 15, 51, 100, 18, 9}