#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        int c[n+1][m+1];
        c[1][1]=a[1][1];
        for(int i=2;i<=n;i++){
            c[i][1]=c[i-1][1]+a[i][1];
        }
        for(int i=2;i<=m;i++){
            c[1][i]=c[1][i-1]+a[1][i];
        }
        for(int i=2;i<=n;i++){
            for(int j=2;j<=m;j++){
                c[i][j]=min(c[i-1][j],min(c[i][j-1],c[i-1][j-1]))+a[i][j];
            }
        }
        cout<<c[n][m]<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321