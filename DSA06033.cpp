#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int maxfrom[n+1];
        for(int i=0;i<=n;i++) maxfrom[i]=-1e9;
        for(int i=n-1;i>=0;i--){
            maxfrom[i]=max(maxfrom[i+1],a[i]);
        }
        int maxvalue=-1;
        for(int i=0;i<n;i++){
            int l=i+1;
            int r=n-1;
            int ans=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[i]<maxfrom[mid]){
                    ans=max(ans,mid);
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            maxvalue=max(ans-i,maxvalue);
        }
        cout<<maxvalue;
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
