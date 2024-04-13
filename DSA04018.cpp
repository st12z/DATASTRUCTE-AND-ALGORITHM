#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;;
        int a[n];
        for(int &x:a) cin>>x;
        int l=0;
        int r=n-1;
        int cnt=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==1){
                r=mid-1;
            }
            else{
                cnt+=mid-l+1;
                l=mid+1;
            }
        }
        cout<<cnt;
        cout<<"\n";       
    }
    system("pause");
}