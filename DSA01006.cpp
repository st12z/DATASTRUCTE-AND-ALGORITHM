#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[11];
void khoitao(){
    cin>>n;
	for(int i=1;i<=n;i++) a[i]=n-i+1;
}
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<" ";
}
void shv(){
    while(1){
        in();
        int i=n-1;
        while(a[i]<a[i+1] && i>=1){
            i--;
        }    
        if(i==0) return;
        int j=n;
        while(a[j]>a[i]){
            j--;
        }
        swap(a[j],a[i]);
        int l=i+1;
        int r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        shv();
        cout<<"\n";
    }
    system("pause");
}
