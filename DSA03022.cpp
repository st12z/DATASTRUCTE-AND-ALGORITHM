#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    sort(a,a+n);
    int tich=1;
    int maxvalue=-1e9-1;
    for(int i=0;i<=2;i++){
        tich=tich*a[i];
        if(tich>maxvalue && i>=1) maxvalue=tich;
    }
    tich=1;
    for(int i=n-1;i>=n-3;i--){
        tich*=a[i];
        if(tich>maxvalue && i<=n-2) maxvalue=tich;
    }
    tich=1;
    tich*=a[n-1]*a[0]*a[1];
    if(tich>maxvalue) maxvalue=tich;
    cout<<maxvalue;
    system("pause");
}