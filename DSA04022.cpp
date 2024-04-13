#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a[26];
char c[27];
char tinh(int n,ll k){
    ll x=a[n-1];
    if(k==x) return c[n];
    if(k>x) k-=x;
    return tinh(n-1,k);
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<=25;i++){
        a[i]=pow(2,i);
    }
    for(int i=1;i<=26;i++){
        c[i]=char(64+i);
    }
    while(t--){
        int n; ll k;
        cin>>n>>k;
        cout<<tinh(n,k);
        cout<<"\n";       
    }
    system("pause");
}