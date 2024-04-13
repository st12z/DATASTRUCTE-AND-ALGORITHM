#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[11];
int cnt=1;
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
}
void in(){
}
int lk(){
    while(1){
        int i=n-1;
        while(a[i]<a[i+1] && i>=1){
            i--;
        }
        if(i==0){
            return cnt;
        }
        int j=n;
        while(a[j]>a[i]){
            j--;
        }
        swap(a[i],a[j]);
        int l=i+1;
        int r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
        cnt++;
    }
}
// 1243
int main(){
    int t;
    cin>>t;
    while(t--){
        cnt=1;
        khoitao();
        cout<<lk()<<"\n";
    }
    system("pause");
}
