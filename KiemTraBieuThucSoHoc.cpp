#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s){
    stack<char>st;
    st.push(-1);
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        else{
            int j=st.top();
            st.pop();
            if(j-i==2) return 1;
            if(s[j+1]=='(' && s[i-1]==')') return 1;
        }
    }
    return 0;
}
//((a+b))
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s)) cout<<"Yes";
        else cout<<"No";
        cout<<"\n"
    }
    system("pause");
}
// 5 1 6 7 2
// 5 1