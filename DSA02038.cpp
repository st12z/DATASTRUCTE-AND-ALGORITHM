#include <bits/stdc++.h>
using namespace std;
int a[16];
int k;
int n;
int x[16];
void khoitao(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        x[i]=i;
    }
    sort(a+1,a+n+1);
}
void out(){
    for(int j=1;j<=k;j++) cout<<a[x[j]]<<" ";
    cout<<"\n";
}
void Try(int i){
    for(int j=x[i-1]+1;j<=n-k+i;j++){
        x[i]=j;
        if(i<k) Try(i+1);
        else out();
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        Try(1);
    }
    system("pause");
}

