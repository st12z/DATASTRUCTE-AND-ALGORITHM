#include <bits/stdc++.h>
using namespace std;
int a[16];
int k;
int n;
int x[16];
vector<vector<int>>ve;
int check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return n>1;
}
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
}
void out(int i){
    vector<int>v;
    for(int j=1;j<=i;j++) v.push_back(x[j]);
    ve.push_back(v);
}
void Try(int i,int cur,int sum){
    for(int j=cur;j<=n;j++){
        x[i]=a[j];
        if(check(sum+a[j])){
            out(i);
        }
        if(j<n) Try(i+1,j+1,sum+a[j]);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ve.clear();
        khoitao();
        Try(1,1,0);
        sort(ve.begin(),ve.end());
        for(int i=0;i<=ve.size()-1;i++){
            for(int x:ve[i]) cout<<x<<" ";
            cout<<"\n";
        }
    }
    system("pause");
}

