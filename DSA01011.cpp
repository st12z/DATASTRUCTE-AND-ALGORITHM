#include <bits/stdc++.h>
using namespace std;
string s;
string hv(){
    int i=s.length()-2;
    while(s[i]>=s[i+1] && i>=0){
        i--;
    }
    if(i==-1) return "BIGGEST";
    int j=s.length()-1;
    while(s[j]<=s[i]){
        j--;
    }
    swap(s[j],s[i]);
    int l=i+1;
    int r=s.length()-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    int cs;
    for(int i=1;i<=t;i++){
        cin>>cs>>s;
        cout<<cs<<" "<<hv()<<"\n";
    }
    system("pause");
}

