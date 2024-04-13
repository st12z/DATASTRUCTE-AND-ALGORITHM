#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,keyy;
        cin>>n>>keyy;
        int a[n];
        for(int &x:a) cin>>x;
        int l=0;
        int r=n-1;
        int pos=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]==keyy){
                pos=mid+1;
                break;
            }
            else if(keyy>a[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(pos==-1) cout<<"NO";
        else{
            cout<<pos<<"\n";
        }
        cout<<"\n";       
    }
    system("pause");
}