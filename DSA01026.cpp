#include <bits/stdc++.h>
using namespace std;
int n,k;
int  a[16];
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) a[i]=6;
}
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<"\n";
}
int check(){
    int length[17]={0};
    if(a[1]!=8 || a[n]!=6) return 0;
    for(int i=1;i<n;i++){
        if(a[i]==8 && a[i+1]==8) return 0;
        if(a[i]==6) length[i]=1;
    }
    for(int i=2;i<=n;i++){
        if(a[i-1]==6 && a[i]==6) length[i]=length[i-1]+1;
        if(length[i]>3) return 0;
    }
    return 1;
}
void lk(){
    while(1){
        if(check()) in();
        int i=n;
        while(a[i]==8 && i>=1){
            a[i]=6;
            i--;
        }
        if(i==0) return;
        a[i]=8;
    }
}
// 1243
int main(){
    khoitao();
    lk();
    system("pause");
}
