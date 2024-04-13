#include <bits/stdc++.h>
using namespace std;
struct canh{
    int dau, cuoi,ts;
};
int parent[1001];
int nums[1001];
int n,m;
int cmp(canh a,canh b){
    return a.ts<b.ts;
}
int find(int u){
    if(u==parent[u]) return u;
    parent[u]=find(parent[u]);
    return parent[u];
}
int Union(int x,int y){
    int a=find(x);
    int b=find(y);
    if(a==b) return 0;
    if(nums[a]<nums[b]) swap(a,b);
    nums[a]+=nums[b];
    parent[b]=a;
    return 1;
}
void init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        parent[i]=i;
        nums[i]=1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        vector<canh>ds;
        for(int i=1;i<=m;i++){
            int x,y,z;
            cin>>x>>y>>z;
            ds.push_back({x,y,z});
        }
        int kq=0;
        sort(ds.begin(),ds.end(),cmp);
        for(int i=0;i<ds.size();i++){
            if(Union(ds[i].dau,ds[i].cuoi)){
                kq+=ds[i].ts;
            }
        }
        cout<<kq<<"\n";
    }
    system("pause");
}