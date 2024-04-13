#include <bits/stdc++.h>
using namespace std;
int n,k;
int  a[17];
void khoitao(){
    cin>>n>>k;
	for(int i=1;i<=n;i++) a[i]=0;
}
void in(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==1) cnt++;
    }
    if(cnt==k){
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<"\n";
    }
}
void lk(){
    while(1){
        in();
        int i=n;
        while(a[i]==1 && i>=1){
            a[i]=0;
            i--;
        }
        if(i==0) return;
        a[i]=1;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        lk();
    }
    system("pause");
}
