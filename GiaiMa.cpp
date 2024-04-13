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
            string temp="";
            temp=temp+s[i];
            if(s[i]==']') st.push(temp);
            else if(s[i]=='['){
                string word="";
                while(!st.empty() && st.top()!="]"){
                    word+=st.top();
                    st.pop();
                }
                st.pop();
                st.push(word);
            } 
            else if(isalpha(s[i])){
                st.push(temp);
            }
            else{
                string res="";
                while(isdigit(s[i]) && i>=0){
                    res=s[i]+res;
                    i--;
                }
                int n=stoi(res);
                string temp="";
                string word=st.top();
                st.pop();
                for(int j=0;j<n;j++){
                    temp+=word;
                }
                st.push(temp);
            }
        }
        string res="";
        while(!st.empty()){
             res+=st.top();
             st.pop();
        }
        cout<<res<<"\n";
    }
}

