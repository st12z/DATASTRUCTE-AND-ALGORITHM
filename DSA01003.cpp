#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[10001];
void khoitao(){
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
}
void hvkt(){
    int i=n-1;
    while(a[i]>=a[i+1] && i>=1){
        i--;
    } 
    if(i==0) return;
    int j=n;
    while(a[j]<a[i]){
        j--;
    }
    swap(a[j],a[i]);
    reverse(a+i+1,a+n);
}
void in(){
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        hvkt();
        in();
    }
    system("pause");
}
