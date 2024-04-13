#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,m;
int parent[1001];
int nums[1001];
void init(){
    for(int i=1;i<=1000;i++){
        parent[i]=i;
        nums[i]=1;
    }
}
int find(int x){
    if(x==parent[x]) return x;
    parent[x]=find(parent[x]);
    return parent[x];
}
void Union(int x,int y){
    int a=find(x);
    int b=find(y);
    if(a==b){
        return ;
    }
    if(nums[a]<nums[b]) swap(a,b);
    nums[a]+=nums[b];
    parent[b]=a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        cin>>n>>m;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            Union(x,y);
        }
        set<int>se;
        int dem=0;
        for(int i=1;i<=n;i++){
            se.insert(parent[i]);
             
        }
        cout<<se.size();
        cout<<"\n";
    }
    system("pause");
}