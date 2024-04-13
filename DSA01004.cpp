#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
void khoitao(){
    cin>>n>>k;
	for(int i=1;i<=k;i++) a[i]=i;
}
void in(){
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<" ";
}
void sth(){
    while(1){
        in();
        int i=k;
        while(a[i]==n-k+i && i>=1){
            i--;
        }
        if(i==0) return;
        a[i]+=1;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sth();
        cout<<"\n";
    }
    system("pause");
}
// 356789 3567810 3 5 6 7 9 1 0 3 5 6 8 9 1 0 3 5 7 8 9 1 0 3 6 7 8 9 1 0