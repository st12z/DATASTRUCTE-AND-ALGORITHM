#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,key;
        cin>>n>>key;
        ll a[n];
        for(ll &x:a) cin>>x;
        sort(a,a+n);
        ll cnt=0;
        for(int i=0;i<=n-3;i++){
            for(int j=i+1;j<=n-2;j++){
                int l=j+1;
                int r=n-1;
                int temp=a[i]+a[j];
                int pos=-1;
                while(l<=r){
                    int mid=(l+r)/2;
                    if(temp+a[mid]<key){
                        pos=mid;
                        l=mid+1;
                    }
                    else{
                        r=mid-1;
                    }
                }
                if(pos!=-1){
                    cnt=cnt+(pos-(j+1)+1);
                }
            }        
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// -2 0 1 3
// -2,0,1
// -2,0,3
// 
