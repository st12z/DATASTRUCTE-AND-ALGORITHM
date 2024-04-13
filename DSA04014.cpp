#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll pairnghich(ll a[],int l,int r){
    if(l==r) return 0;
    int mid=(l+r)/2;
    ll cnt=0;
    vector<ll>ve;
    ve.clear();
    for(int i=mid+1;i<=r;i++) ve.push_back(a[i]);
    sort(ve.begin(),ve.end());
    for(int i=l;i<=mid;i++){
        int x=-1;
        int l1=0;
        int r1=ve.size()-1;
        while(l1<=r1){
            int mid1=(l1+r1)/2;
            if(ve[mid1]>=a[i]){
                r1=mid1-1;
            }
            else{
                x=mid1;
                l1=mid1+1;
            }
        }
        if(x!=-1) cnt=cnt+(x+1);
    }
    return cnt+pairnghich(a,l,mid)+pairnghich(a,mid+1,r);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(ll &x:a) cin>>x;
        cout<<pairnghich(a,0,n-1);
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
//