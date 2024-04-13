#include <bits/stdc++.h>
using namespace std;
int n,k;
char a[16];
void khoitao(){
    cin>>n>>k;
    for(int i=1;i<=k;i++) a[i]=64+i;
}
void in(){
    for(int i=1;i<=k;i++){
        cout<<a[i];
    }
    cout<<"\n";
}
void lk(){
    while(1){
        in();
        int i=k;
        while(a[i]==64+n-k+i && i>=1){
            i--;
        }
        if(i==0) return;
        a[i]+=1;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
}
// 1243
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        lk();
    }
    system("pause");
}
