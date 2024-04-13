#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
void khoitao(){
    string s;
    cin>>s;
    n=s.length();
	for(int i=0;i<=n-1;i++) a[i+1]=s[i]-'0';
}
void out(){
    for(int i=1;i<=n;i++) cout<<a[i];
}
void sinh(){
    int i=n;
    while(a[i]==0 && i>=1){
        a[i]=1;
        i--;
    }
    if(i==0){
        for(int i=1;i<=n;i++) cout<<1;
        return;
    }
    a[i]-=1;
    out();
}

int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sinh();
        cout<<"\n";
    }
    system("pause");
}