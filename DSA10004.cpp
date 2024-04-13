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
            a[y][x]=1;
        }
        int bac[n+1]={0};
        int d=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                bac[i]+=a[i][j];
            }
            if(bac[i]%2==1) d++;
        }
        if(d==0){
            cout<<2;
        }
        else if(d==2){
            cout<<1;
        }
        else{
            cout<<0;
        }
        cout<<"\n";
    }
    system("pause");
}