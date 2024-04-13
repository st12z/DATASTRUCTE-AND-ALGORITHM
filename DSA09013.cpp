#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[1001][1001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        for(int i=1;i<=1000;i++){
            memset(a[i],0,sizeof(a[i]));
        }
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            a[x][y]=1;
            a[y][x]=1;
        }
        for(int u=1;u<n;u++){
            for(int v=u+1;v<=n;v++){
                if(a[u][v]==1){
                    int visited[1001]={0};
                    a[u][v]=0;
                    a[v][u]=0;
                    stack<int>st;
                    st.push(1);
                    visited[1]=1;
                    while(st.empty()==0){
                        int u=st.top();
                        st.pop();
                        for(int x=1;x<=n;x++){
                            if(a[u][x]==1 && visited[x]==0){
                                visited[x]=1;
                                st.push(u);
                                st.push(x);
                                break;
                            }
                        }
                    }
                    int check=0;
                    for(int i=1;i<=n;i++){
                        if(visited[i]==0){
                            check=1;
                            break;
                        }
                    }
                    if(check==1) cout<<u<<" "<<v<<" ";
                    a[u][v]=1;a[v][u]=1;
                }
            }
        }
        cout<<"\n";
    }
    system("pause");
}