#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n>>key;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
        }
        int l=0;
        int r=n-1;
        int idx=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(key==a[mid]){
                idx=mid;
                break;
            }
            else if(key<a[mid]){
                if(key<a[l]){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            else{
                l=mid+1;
            }
        }
        cout<<idx+1;
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
