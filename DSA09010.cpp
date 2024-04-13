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
        }
        int check=0;
        for(int i=1;i<=n;i++){
            int visited[1001]={0};
            if(visited[i]==0){
                stack<int>st;
                st.push(i);
                visited[i]=1;
                while(st.empty()==0){
                    int u=st.top();
                    st.pop();
                    for(int x:adj[u]){
                        if(visited[x]==0){
                            visited[x]=1;
                            st.push(u);
                            st.push(x);
                            break;
                        }
                    }
                }
                for(int i=1;i<=n;i++){
                    if(visited[i]==0){
                        check=1;
                        break;
                    }
                }
            }
        }
        if(check==1) cout<<"NO";
        else cout<<"YES";
        cout<<"\n";
    }
    system("pause");
}