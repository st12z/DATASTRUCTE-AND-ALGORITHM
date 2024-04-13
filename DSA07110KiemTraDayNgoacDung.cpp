#include <bits/stdc++.h>
using namespace std;
    string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            char lower=tolower(s[i]);
            char upper=toupper(s[i]);
            if(st.empty() || (s[i]>='a' && s[i]<='z' && upper!=st.top()) ||(s[i]>='A' && s[i]<='Z' &&lower!=st.top())) st.push(s[i]);
            else{
                if(!st.empty() &&((lower==st.top() && s[i]>='A' && s[i]<='Z')||(upper==st.top() &&(s[i]>='a' &&s[i]<='z')))){
                    st.pop();
                }
            }
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
    }
int main(){
    string s;
    cin>>s;
    cout<<makeGood(s);
    
}
//orRoOrROwnTNW
//ooO