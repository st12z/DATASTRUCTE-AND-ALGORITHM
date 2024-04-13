#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int f[n+1]={};
        f[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=min(i,k);j++){
                f[i]+=f[i-j];
            }
        }
        cout<<f[n];
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321
// 1 1
// 1.5 0
