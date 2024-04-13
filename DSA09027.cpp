#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>adj[1001];
        for(int i=1;i<=m;i++){
            int x;int y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int visited[1001]={0};
        vector<vector<int>>ve;
        for(int i=1;i<=n;i++){
            if(visited[i]==0){
                vector<int>v;
                stack<int>st;
                st.push(i);
                v.push_back(i);
                visited[i]=1;
                while(!st.empty()){
                    int u=st.top();
                    st.pop();
                    for(int x:adj[u]){
                        if(visited[x]==0){
                            visited[x]=1;
                            st.push(u);
                            st.push(x);
                            v.push_back(x);
                            break;
                        }
                    }
                }
                ve.push_back(v);
            }
        }
        map<int,int>mp;
        for(int i=0;i<ve.size();i++){
            for(int x:ve[i]){
                mp[x]=i;
            }
        }
        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;
            if(mp[x]==mp[y]) cout<<"YES";
            else cout<<"NO";
            cout<<"\n";
        }
    }
    system("pause");
}