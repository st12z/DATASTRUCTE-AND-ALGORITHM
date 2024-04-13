#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>res;
        stack<int>st;
        int a[n];
        for(int &x:a) cin>>x;
        res.push_back(-1);
        st.push(a[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!st.empty() && a[i]>=st.top()){
                st.pop();
            }
            if(st.empty()) res.push_back(-1);
            else res.push_back(st.top());
            st.push(a[i]);
        }
        reverse(res.begin(),res.end());
        for(int x:res) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}

