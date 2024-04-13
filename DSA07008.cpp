#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<char,int>mp;
    mp['(']=0;
    mp['+']=1;
    mp['-']=1;
    mp['*']=2;
    mp['/']=2;
    mp['^']=3;
    while(t--){
        string s;
        cin>>s;
        stack<char>st;
        string res="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])) res+=s[i];
            else if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                while(!st.empty() && st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                if(st.top()=='(') st.pop();
            }
            else{
                while(!st.empty() && mp[st.top()]>=mp[s[i]]){
                    res+=st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty() && st.top()!='('){
            res+=st.top();
            st.pop();
        }
        cout<<res;
        cout<<"\n";
    }
}
//((A+B)*(C-D))/E
//((()()())))
//()(()))()
