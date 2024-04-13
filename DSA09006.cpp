#include <bits/stdc++.h>
using namespace std;
vector<int>adj[1001];
int visited[1001];
int parent[1001];
int n,m,s,t;
int check;
void init(){
    cin>>n>>m;
    cin>>s>>t;
    check=0;
    memset(visited,0,sizeof(visited));
    memset(parent,0,sizeof(parent));
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
        stack<int>st;
        st.push(s);
        visited[s]=1;
        while(!st.empty()){
            int top=st.top();
            st.pop();
            for(int x:adj[top]){
                if(visited[x]==0){
                    visited[x]=1;
                    parent[x]=top;
                    st.push(top);
                    st.push(x);
                    break;
                }
            }
        }
        if(parent[t]==0){
            cout<<-1;
        }
        else{
            vector<int>ve;
            while(s!=t){
                ve.push_back(t);
                t=parent[t];
            }
            ve.push_back(s);
            reverse(ve.begin(),ve.end());
            for(int x:ve) cout<<x<<" "; 
        }
        cout<<"\n";
    }
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321