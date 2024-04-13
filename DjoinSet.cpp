#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
vector<int>adj[1001];
int visited[1001];
void init(){
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=1000;i++) adj[i].clear();
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        int check=0;
        queue<int>q;
        q.push(1);
        visited[1]=1;
        while(!q.empty() && check==0){
            int top=q.front();
            q.pop();
            for(int x:adj[top]){
                if(visited[x]==0){
                    visited[x]=-visited[top];
                    q.push(x);
                }
                else if(visited[x]==visited[top]){
                    cout<<x<<" "<<top<<"\n";
                    check=1;
                    break;
                }
            }
        }
        if(check) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
    system("pause");
}