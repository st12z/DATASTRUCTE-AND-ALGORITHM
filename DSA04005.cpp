#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fibo[93];
char fiboword(int n,ll k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=fibo[n-2]) return fiboword(n-2,k);
    return fiboword(n-1,k-fibo[n-2]);
}
int main(){
    int t;
    cin>>t;
    fibo[1]=1;
    fibo[2]=1;
    for(int i=3;i<=92;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    while(t--){
        int n;
        cin>>n;
        ll k;
        cin>>k;
        cout<<fiboword(n,k)<<"\n";
    }
    system("pause");
}