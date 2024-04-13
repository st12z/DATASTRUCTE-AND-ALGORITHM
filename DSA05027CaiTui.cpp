#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int main(){
    int n;
    cin>>n;
    ll a[n];
    for(ll &x:a) cin>>x;
    ll f[n];
    for(int i=0;i<n;i++) f[i]=a[i];
    for(int i=1;i<n;i++){
        f[i]=f[i]+a[i-1];
    }
    for(int i=1;i<n;i++){
        f[i]/=a[i];
    }

}
// 5 1 6 7 2
// 5 1 
