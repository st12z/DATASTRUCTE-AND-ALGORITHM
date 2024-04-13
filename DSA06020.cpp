#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
        }
        int l=0;
        int r=n-1;
        int check=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==m){
                check=1;
                break;
            }
            else if(a[mid]>m){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        if(check==1) cout<<1;
        else cout<<-1;
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
