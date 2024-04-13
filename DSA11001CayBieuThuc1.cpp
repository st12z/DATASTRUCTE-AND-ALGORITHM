#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        stack<string>st;
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                string temp="";
                temp+=s[i];
                st.push(temp);
            }
            else{
                string s1=st.top();
                st.pop();
                string s2=st.top();
                st.pop();
                string temp=s2+s[i]+s1;
                st.push(temp);
            }
        }
        cout<<st.top()<<"\n";
    }
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
//axxxy
//axxxy
