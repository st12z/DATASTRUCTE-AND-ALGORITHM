#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f[51];
void solve(){
    f[0]=1;
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=50;i++){
        f[i]=f[i-3]+f[i-1]+f[i-2];
    }
}
int main(){
	int t;
	cin>>t;
    solve();
	while(t--){
        int n;
        cin>>n;
        cout<<f[n]<<"\n";
	}
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
