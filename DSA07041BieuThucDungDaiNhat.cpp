#include <bits/stdc++.h>
using namespace std;
int dem(string s){
    stack<char>st;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(!st.empty()){
                if(st.top()=='('){
                    sum+=2;
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
            
        }
    }
    return sum;
}
// )()())()
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<dem(s);
        cout<<"\n";
    }
    system("pause");
}
// a-(b+c)
