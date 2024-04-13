#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
ll P[1001][1001];
void solve(){
    for(int i=1;i<=1000;i++){
        P[i][1]=i;
    }
    for(int i=1;i<=1000;i++){
        for(int j=2;j<=i;j++){
            P[i][j]=((P[i][j-1]%mod)*(i-j+1)%mod)%mod;
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
        cout<<P[n][k]<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321