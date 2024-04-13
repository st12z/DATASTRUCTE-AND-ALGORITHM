#include <bits/stdc++.h>
using namespace std;
#define ll long long
int tong1(string a,string b){
    for(int i=0;i<a.length();i++){
        if(a[i]=='5') a[i]='6';
    }
    for(int i=0;i<b.length();i++){
        if(b[i]=='5') b[i]='6';
    }
    int x=stoi(a);
    int y=stoi(b);
    return x+y;
}
int tong2(string a,string b){
    for(int i=0;i<a.length();i++){
        if(a[i]=='6') a[i]='5';
    }
    for(int i=0;i<b.length();i++){
        if(b[i]=='6') b[i]='5';
    }
    int x=stoi(a);
    int y=stoi(b);
    return x+y;
}
int main(){
    string a;string b;
    cin>>a>>b;
    cout<<tong2(a,b)<<" "<<tong1(a,b);
    system("pause");
}