#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
void khoitao(){
    cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
}
void in(){
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<"\n";
}
void sinh(){
    int i=n-1;
    while(a[i]>a[i+1] && i>=1){
        i--;
    }
    if(i==0){
        for(int i=1;i<=n;i++) cout<<i<<" ";
        cout<<"\n";
        return;
    }
    int k=n;
    while(a[k]<a[i]) k--;
    swap(a[k],a[i]);
    int l=i+1;
    int r=n;
    while(l<r){
        swap(a[l],a[r]);
        l++;
        r--;
    }
    in();

}

int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sinh();
    }
    system("pause");
}