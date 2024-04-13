#include <bits/stdc++.h>
using namespace std;
int n,k;
char  a[17];
void khoitao(){
    cin>>n;
	for(int i=1;i<=n;i++) a[i]='A';
}
bool check(){
    if(a[1]!='H' || a[n]!='A') return 0;
    for(int i=1;i<n;i++){
        if(a[i]=='H' && a[i+1]=='H') return 0;
    }
    return 1;
}
void in(){
    if(check()){
        for(int i=1;i<=n;i++) cout<<a[i];
        cout<<"\n";
    }
}
void lk(){
    while(1){
        in();
        int i=n;
        while(a[i]=='H' && i>=1){
            a[i]='A';
            i--;
        }
        if(i==0) return;
        a[i]='H';
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        lk();
    }
    system("pause");
}
