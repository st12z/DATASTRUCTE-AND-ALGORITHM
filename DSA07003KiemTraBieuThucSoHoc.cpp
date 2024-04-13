#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int check(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        else if(s[i]==')'){
            int j=st.top();
            st.pop();
            if(i-j==2) return 1;
            if(s[i+1]==')' && s[j-1]=='(') return 1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        if(check(s)) cout<<"Yes";
        else cout<<"No";
        cout<<"\n";
    }
    system("pause");
}
