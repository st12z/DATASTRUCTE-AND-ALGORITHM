#include <bits/stdc++.h>
using namespace std;
int a[21];
int n;
void init(){
    cin>>n;
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
}
int check(){
    int l=1;
    int r=n;
    while(l<r){
        if(a[l]!=a[r]) return 0;
        l++;
        r--;
    }
    return 1;
}
void out(){
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
}
void sinh(){
    while(1){
        if(check()){
            out();
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
    init();
    sinh();
}