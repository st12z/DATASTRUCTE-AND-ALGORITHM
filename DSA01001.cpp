#include <bits/stdc++.h>
using namespace std;
string s;
void khoitao(){
	cin>>s;
}
void xnp(){
    int i=s.length()-1;
    while(s[i]=='1' && i>=0){
        s[i]='0';
        i--;
    }
    if(i==-1){
        return;
    }
    s[i]='1';
}
void in(){
    cout<<s<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        xnp();
        in();
    }
    system("pause");
}
