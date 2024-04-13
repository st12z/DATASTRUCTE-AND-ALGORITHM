#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int degv[1001];
vector<int>adj[1001];
int cnt;
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++) adj[i].clear();
    memset(degv,0,sizeof(degv));
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        degv[y]++;
    }
}
void kahn(){
    cnt=0;
    queue<int>q;
    for(int i=1;i<=n;i++){
        if(degv[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int top=q.front();
        q.pop();
        cnt++;
        for(int x:adj[top]){
            degv[x]--;
            if(degv[x]==0){
                q.push(x);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        kahn();
        if(cnt==n) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
}