#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        ll a[n];
        for(ll &x:a) cin>>x;
        int l=0;
        int r=n-1;
        ll check=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==x){
                check=mid; 
                break;
            }
            else if(a[mid]>x){
                r=mid-1;
            }
            else{
                check=mid;
                l=r+1;
            }
        }
        if(check!=-1) cout<<check+1<<"\n";
        else cout<<-1<<"\n";
    }
    system("pause");
}