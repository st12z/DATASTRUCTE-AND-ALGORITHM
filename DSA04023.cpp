#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=0;
        for(int i=n-1;i>=1;i--){
            int l=0;
            int r=i-1;
            int pos=-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(a[mid]>(a[i]-k)){
                    pos=mid;
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            if(pos!=-1)cnt=cnt+i-1-pos+1;
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// 0 1 1 2 3 5 8 13 21 34 