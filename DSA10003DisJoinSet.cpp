#include <bits/stdc++.h>
using namespace std;
#define ll long long
int parent[1001];
int kt[1001];
int find(int u){
    if(u==parent[u]){
        return u;
    }
    return find(parent[u]);
}
int Union(int x,int y){
    int a=find(x);
    int b=find(y);
    if(a==b){
        return 1;
    }
    if(kt[a]<kt[b]){
        parent[a]=b;
        kt[b]=kt[a]+kt[b];
    }
    else{
        parent[b]=a;
        kt[a]=kt[a]+kt[b];
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ok=0;
        for(int i=1;i<=n;i++){
            kt[i]=1;
            parent[i]=i;
        }
        int a,b;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            int check=Union(x,y);
            if(check==1){
                ok=1;
            }
        }
        if(ok==1){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        cout<<"\n";
    }
}