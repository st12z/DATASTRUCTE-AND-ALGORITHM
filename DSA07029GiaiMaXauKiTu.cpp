#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                string ans="";
                while(!st.empty() && st.top()!='['){
                    ans=st.top()+ans;
                    st.pop();
                }
                st.pop();
                string res="";
                while(!st.empty() && isdigit(st.top())){
                    res=st.top()+res;
                    st.pop();
                }
                int n=0;
                for(int i=0;i<res.length();i++) n=n*10+res[i]-'0';
                res.clear();
                for(int i=0;i<n;i++){
                    res=res+ans;
                }
                for(char c:res) st.push(c);
            } 
            else{
                st.push(s[i]);
            }
        }
        string res="";
        while(!st.empty()){
            res=st.top()+res;
             st.pop();
        }
        cout<<res<<"\n";
    }
    system("pause");
}

