#include <bits/stdc++.h>
using namespace std;
#define ll long long
string fibo[51];
int main(){
    int t;
    cin>>t;
    fibo[0]="A";
    fibo[1]="B";
    for(int i=2;i<=49;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    while(t--){
        int n,k;
        cin>>n>>k;
        int cnt=0;
        for(int j=0;j<k;j++){
            if(fibo[n][j]=='B') cnt++;
        }
        cout<<cnt<<"\n";
    }
}