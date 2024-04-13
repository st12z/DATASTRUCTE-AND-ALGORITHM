#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
void khoitao(){
    cin>>n>>k;
	for(int i=1;i<=k;i++) cin>>a[i];
}
void sth(){
    int i=k;
    while(a[i]==n-k+i && i>=1 ){
        i--;
    } 
    if(i==0) return;
    a[i]+=1;
    for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
}
void in(){
    for(int i=1;i<=k;i++) cout<<a[i]<<" ";
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sth();
        in();
    }
    system("pause");
}