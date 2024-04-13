#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        int f[n+1][m+1]={};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        f[0][1]=0;
        f[1][0]=0;
        for(int i=1;i<=n;i++){
            f[i][1]=f[i-1][1]+a[i][1];
        }
        for(int i=1;i<=m;i++){
            f[1][i]=f[1][i-1]+a[1][i];
        }
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                f[i][j]=min(f[i-1][j]+a[i][j],min(f[i-1][j-1]+a[i][j],f[i][j-1]+a[i][j]));
            }
        }
        cout<<f[n][m]<<"\n";
	}
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
