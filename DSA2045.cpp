#include <bits/stdc++.h>
using namespace std;
char a[17];
int n;
char x[17];
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
}
void out(int i){
    for(int j=1;j<=i;j++) cout<<x[j];
    cout<<" ";
}
void Try(int i,int cur){
    for(int j=cur;j<=n;j++){
        x[i]=a[j];
        out(i);
        if(j<n) Try(i+1,j+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        Try(1,1);
        cout<<"\n";
    }
    system("pause");
}