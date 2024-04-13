#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int &x:a) cin>>x;
        int f[n+1][s+1]={};
        for(int i=1;i<n;i++){
            f[i][a[i]]=1;
            for(int j=1;j<=s;j++){
                if(f[i-1][j]==1 || (j>a[i] && f[i-1][j-a[i]]==1)){
                    f[i][j]=1;
                }
            }
        }
        if(f[n-1][s]==1) cout<<"YES";
        else cout<<"NO";
    }
    system("pause");
}
