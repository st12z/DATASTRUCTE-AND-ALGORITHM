#include<bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s){
    stack<int>st;
    st.push(-1);
    int kq=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(i);
        else{
            st.pop();
            if(!st.empty()){
                int j=st.top();
                kq=max(kq,i-j);
            }
            else{
                st.push(i);
            }
        }
    }
    return kq;
}
//(()(()))
int main(){
    string s=")()())";
    cout<<check(s);
    system("pause");
}
// 5 1 6 7 2
// 5 1