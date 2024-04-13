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
        int l=0;
        int r=n-1;
        while(l<r){
            if(a[l]>a[r]) swap(a[l],a[r]);
            l++;
            r--;
        }
        int ok=1;
        for(int i=0;i<=n-2;i++){
            if(a[i]>a[i+1]){
                ok=0;
                break;
            }
        }
        if(ok==1 ) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    system("pause");
}