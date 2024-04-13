#include <bits/stdc++.h>
using namespace std;
int prime[401];
int n,p,s;
int bd,kt;
int x[11];
vector<vector<int>>ve;
void sang(){
    for(int i=2;i<=400;i++) prime[i]=1;
    for(int i=2;i<=20;i++){
        for(int j=i*i;j<=400;j+=i){
            prime[j]=0;
        }
    }
}
void khoitao(){
    cin>>n>>p>>s;
    int j=p+1;
    while(prime[j]==0){
        j++;
    }
    bd=j;
    kt=s-j;
}
int cnt;
void out(){
    cnt++;
    string word="";
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(x[i]);
    }
    ve.push_back(v);
}
void Try(int i,int sum,int bd){
    for(int j=bd;j<=kt;j++){
        if(sum+j<=s && prime[j]==1){
            x[i]=j;
            if(i<n && sum+j<=s){
                Try(i+1,sum+j,j+1);
            }
            if(i==n){
                if(sum+j==s){
                    out();
                }
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        cnt=0;
        ve.clear();
        khoitao();
        Try(1,0,bd);
        if(cnt==0) cout<<cnt<<"\n";
        else{
            cout<<cnt<<"\n";
            for(int i=0;i<ve.size();i++){
                for(int x:ve[i]) cout<<x<<" ";
                cout<<"\n";
            }
        }
    }
    system("pause");
}

