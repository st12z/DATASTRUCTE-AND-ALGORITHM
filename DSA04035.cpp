#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
ll luythua(int a,ll b){
    if(b==0) return 1;
    if(b==1) return a;
    ll x=luythua(a,b/2);
    if(b%2==1){
        return a*(x*x%mod)%mod;
    }
    return (x*x)%mod;
}
int main(){
    while(1){
        int a;ll b;
        cin>>a>>b;
        if(a==0 && b==0) break;
        cout<<luythua(a,b)<<"\n";
    }
    system("pause");
}
// 0 1 1 2 3 5 8 13 21 34 