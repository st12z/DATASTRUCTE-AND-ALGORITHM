#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        for(int i=n-1;i>=n-k;i--) cout<<a[i]<<" ";
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
