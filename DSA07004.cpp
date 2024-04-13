#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt=0;
        if(s[0]==')'){
            s[0]='(';
            cnt++;
        }
        if(s[s.length()-1]=='('){
            s[s.length()-1]=')';
            cnt++;
        }
        stack<char>st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(s[i]==')'){
                if(st.empty()){
                    st.push('(');
                    cnt++;
                }
                else{
                    st.pop();
                }
            }
            if(s[i]=='('){
                st.push(s[i]);
            }
        }
        if(st.empty()==0){
            cnt+=st.size()/2;
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 
// 444222321

