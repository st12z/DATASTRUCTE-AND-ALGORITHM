#include <bits/stdc++.h>
#define ll long long
using namespace std;
set<int> adj[1001];
int n,m;
void nhap(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x;int y;
        cin>>x>>y;
        adj[x].insert(y);
        adj[y].insert(x);
    }
}
void euler(int v){
    stack<int>st;
    vector<int> EC;
    st.push(v);
    while(!st.empty()){
        int x=st.top();
        if(adj[x].size()!=0){
            int y=*adj[x].begin();
            st.push(*adj[x].begin());
            adj[x].erase(y);
            adj[y].erase(x);
        }
        else{
            EC.push_back(x);
            st.pop();
        }
    }
    reverse(EC.begin(),EC.end());
    for(int x:EC) cout<<x<<" ";
}
int main(){
    nhap();
    euler(1);
    system("pause");
}
// 1 9 16 25 64
// 
