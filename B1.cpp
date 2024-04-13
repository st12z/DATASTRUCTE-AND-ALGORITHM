#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='2') cnt++;
    }
    return cnt>s.size()-cnt;
}
int main(){
    int n=5;
    string s=5+"";
    cout<<s;
    system("pause");
}