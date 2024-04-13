#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        ll f[n+1]={};
        f[1]=1;
        f[0]=1;
        for(int i=2;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                f[i]=(f[i]+f[i-j])%mod;
            }
        }
        cout<<f[n]<<"\n";
	}
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
