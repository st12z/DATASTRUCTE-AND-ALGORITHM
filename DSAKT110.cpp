#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int f[n];
        f[0]=a[0];
        f[1]=max(a[0],a[1]);
        for(int i=2;i<n;i++){
            f[i]=max(f[i-2]+a[i],f[i-1]);
        }
        cout<<f[n-1]<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321DSAKT110