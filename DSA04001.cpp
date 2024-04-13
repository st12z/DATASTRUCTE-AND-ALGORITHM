#include <bits/stdc++.h>
using namespace std;
int mod=123456780;// 12345678911
#define ll long long
int tinh(int n,int k){
    ll x=pow(2,n-1);
    if(k==x) return n;
    if(k>x) k-=x;
    return tinh(n-1,k);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int k;
        cin>>k;
        cout<<tinh(n,k)<<"\n";
    }
    system("pause");
}
// 2
// 3 2
// 3 8 
//  1, 2, 1, 3, 1, 2, 1,4,1, 2, 1, 3, 1, 2, 1,
// 1, 2, 1, 3, 1, 2, 1, 4,5,1, 2, 1, 3, 1, 2, 1, 4