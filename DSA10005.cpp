#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n+1][n+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) a[i][j]=0;
        }
        for(int i=1;i<=m;i++){
            int x;int y;
            cin>>x>>y;
            a[x][y]=1;
        }
        int degv[n+1]={0};
        int degr[n+1]={0};
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]==1){
                    degr[i]++;
                    degv[j]++;
                }
            }
        }
        int check=1;
        for(int i=1;i<=n;i++){
            if(degr[i]!=degv[i]){
                check=0;
                break;
            }
        }
        if(check==1) cout<<1;
        else cout<<0;
        cout<<"\n";
    }
    system("pause");
}