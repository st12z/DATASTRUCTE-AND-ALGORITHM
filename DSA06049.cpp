#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a){
            cin>>x;
        }
        sort(a,a+n);
        ll cnt=0;
        for(int i=n-1;i>=1;i--){
            int l=0;
            int r=i-1;
            int pos=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[i]-a[mid]>=k){
                    l=mid+1;
                }
                else{
                    pos=mid;
                    r=mid-1;
                }
            }
            if(pos!=-1){
                cnt=cnt+(i-pos);
            }            
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// 4 3
// 1 2 4 10
// 1 5 2 1 2
// 
