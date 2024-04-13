#include <bits/stdc++.h>
using namespace std;
int a[100];
int n;
bool check(){
    int l=1;
    int r=n;
    while(a[l]==a[r]){
        l++;
        r--;
    }
    if(l>r) return 1;
    return 0;
}
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) a[i]=0;
}
void xnp(){
    while(1){
        if(check()){
            for(int i=1;i<=n;i++) cout<<a[i]<<" ";
            cout<<"\n";
        }
        int i=n;
        while(a[i]==1 && i>=1){
            a[i]=0;
            i--;
        }
        if(i==0) return;
        a[i]+=1;
    }
}
int main(){
    khoitao();
    xnp();
    system("pause");
}
