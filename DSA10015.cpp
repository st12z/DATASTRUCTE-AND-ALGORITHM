#include <bits/stdc++.h>
using namespace std;
struct Point{
    int fi,se,ts;
};
int Parent[101];
int hang[101];
int cmp(Point a,Point b){
    return a.ts<b.ts;
}
int find(int x){
    if(x==Parent[x]){
        return x;
    }
    return Parent[x]=find(Parent[x]);
}
int Union(int x,int y){
    int a=find(x);
    int b=find(y);
    if(a==b) return 1;
    if(hang[a]<hang[b]){
        Parent[a]=b;
        hang[a]+=hang[b];
    }
    else{
        Parent[b]=a;
        hang[b]+=hang[a];
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int d=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            Parent[i]=i;
            hang[i]=1;
        }
        vector<pair<int,int>>ve;
        struct Point ds[m+1];
        for(int i=1;i<=m;i++){
            cin>>ds[i].fi>>ds[i].se>>ds[i].ts;
        }
        sort(ds+1,ds+m+1,cmp);
        for(int i=1;i<=m;i++){
            int x=ds[i].fi;
            int y=ds[i].se;
            int w=ds[i].ts;
            if(Union(x,y)==1) continue;
            d=d+w;
            ve.push_back({x,y});          
        }
        cout<<d<<"\n";
    }
}


