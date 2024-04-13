#include <bits/stdc++.h>
using namespace std;
string s;
void khoitao(){
    cin>>s;
}
void in(){
    cout<<s<<"\n";
}
void lk(){
    int i=s.length()-1;
    while(s[i]=='0' && i>=0){
        s[i]='1';
        i--;
    }
    if(i==-1) return ;
    s[i]='0';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        lk();
        in();
    }
    system("pause");
}
