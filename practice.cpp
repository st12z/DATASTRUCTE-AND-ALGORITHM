#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[21];
vector<vector<int>>ve;
void khoitao(){
    cin>>n>>k;
    ve.clear();
	for(int i=1;i<=n;i++) a[i]=0;
}
void out(){
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(a[i]);
    }
    ve.push_back(v);
}
bool check(){
    int cnt=0;
    int count=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            cnt++;
        }
        else{
            if(cnt==k){
                count++;
            }
            cnt=0;
        }
    }
    if(cnt==k){
        count++;
    }
    return count==1;
}
void sinh(){
    while(1){
        if(check()) out();
        int i=n;
        while(a[i]==1&&i>=1){
            a[i]=0;
            i--;
        }
        if(i==0) return;
        a[i]=1;
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sinh();
        cout<<ve.size()<<"\n";
        for(int i=0;i<ve.size();i++){
            for(int x:ve[i]) cout<<x<<" ";
            cout<<"\n";
        }
    }
}