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
        for(int i=1;i<=n;i++){
            if(a[i][1]==1) f[i][1]=1;
            if(a[1][i]==1) f[1][i]=1;
        }
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                if(a[i][j]==1){
                    f[i][j]=min(f[i-1][j],min(f[i][j-1],f[i-1][j-1]))+1;
                }
            }
        }
        int ans=-1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) ans=max(ans,f[i][j]);
        }
        cout<<ans<<"\n";
    }
    system("pause");
}
// 1 15 51 45 33 100 12 18 9
// 1 