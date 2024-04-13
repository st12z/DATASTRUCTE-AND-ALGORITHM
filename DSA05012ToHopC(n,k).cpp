#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll c[1001][1001];
int mod=1e9+7;
void solve(){
    c[0][1]=1;
    c[1][1]=1;
    for(int i=2;i<=1000;i++){
        c[i][i]=1;
        c[0][i]=1;
        for(int j=1;j<i;j++){
            c[j][i]=c[j-1][i-1]+c[j][i-1];
            c[j][i]%=mod;
        }
    }
}
int main(){
	int t;
	cin>>t;
    solve();
	while(t--){
        int n,k;
        cin>>n>>k;
        cout<<c[k][n]<<"\n";
	}
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
