#include <bits/stdc++.h>
using namespace std;
int a[1001];
int n;
void init(){
    string s;
    cin>>s;
    n=s.length();
    for(int i=0;i<=s.length()-1;i++){
        a[i+1]=s[i]-'0';
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
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<"\n";
}
void sinh(){
    int i=n;
    while(a[i]==1 && i>=1){
        a[i]=0;
        i--;
    }
    if(i==0){
        out();
        return;
    }
    a[i]+=1;
    out();

}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        sinh();
    }
}