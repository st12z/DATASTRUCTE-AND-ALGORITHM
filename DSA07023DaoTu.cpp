#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stack<string>st;
        stringstream ss(s);
        string word;
        while(ss>>word) st.push(word);
        while(!st.empty()){
            cout<<st.top();
            if(st.size()>=2) cout<<" ";
            st.pop();
        }
        cout<<"\n";
    }
    system("pause");
}

