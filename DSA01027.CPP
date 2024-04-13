#include <bits/stdc++.h>
using namespace std;
int n;
int a[10];
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
}
void in(){
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void lk(){
    while(1){
        in();
        int i=n-1;
        while(a[i]>=a[i+1] && i>=1){
            i--;
        }
        if(i==0) return;
        int j=n;
        while(a[j]<a[i]) j--;
        swap(a[i],a[j]);
        int l=i+1;
        int r=n;
        while(l<r){
            swap(a[r],a[l]);
            l++;
            r--;
        }
    }
}
// 1243
int main(){
    khoitao();
    lk();
    system("pause");
}
