#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        f[1]=a[1];
        f[2]=a[2]+a[0];
        for(int i=3;i<n;i++){
            f[i]=max(f[i-3]+a[i],f[i-2]+a[i]);
        }
        cout<<*max_element(f,f+n);
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
