#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string>st;
        for(int i=s.length()-1;i>=0;i--){
            if(isalpha(s[i])){
                string temp="";
                st.push(temp+s[i]);
            }
            else{
                string operand1=st.top();
                st.pop();
                string operand2=st.top();
                st.pop();
                string temp=operand1+operand2+s[i];
                st.push(temp);
            }
        }
        cout<<st.top();
        cout<<"\n";
    }
}

