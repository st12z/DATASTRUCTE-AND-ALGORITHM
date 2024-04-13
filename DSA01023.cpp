#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[16];
int cnt=1;
int x[16];
void khoitao(){
    cin>>n>>k;
    for(int i=1;i<=k;i++) cin>>a[i];
    for(int i=1;i<=k;i++) x[i]=i;
}
bool check(){
    for(int i=1;i<=k;i++){
        if(x[i]!=a[i]) return 0;
    }
    return 1;
}
void in(){
}
int lk(){
    while(1){
        if(check()) return cnt;
        int i=k;
        while(x[i]==n-k+i && i>=1){
            i--;
        }
        x[i]+=1;
        for(int j=i+1;j<=k;j++) x[j]=x[i]+j-i;
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
