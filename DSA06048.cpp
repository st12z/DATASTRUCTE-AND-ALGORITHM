#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; ll key;
        cin>>n;
        ll a[n];
        key=1e18;
        for(ll &x:a){
            cin>>x;
            if(x<key) key=x;
        }
        if(key==a[1]){
            cout<<1;
        }
        else{
        int l=0;
        int r=n-1;
        int idx=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(key==a[mid]){
                idx=mid;
                break;
            }
            else if(key<a[mid]){
                if(a[mid]>a[0]){
                    if(key<a[l]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }}
                else{
                    r=mid-1;
                }
            }
            else{
                l=mid+1;
            }
        }
        cout<<idx;
        }
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
