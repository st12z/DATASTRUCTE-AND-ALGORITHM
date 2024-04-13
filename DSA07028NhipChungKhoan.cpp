#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        stack<int>st;
        int f[n];
        f[0]=1;
        st.push(0);
        for(int i=1;i<n;i++){
            f[i]=1;
            while(!st.empty() && a[i]>=a[st.top()]){
                f[i]+=f[st.top()];
                st.pop();
            }
            st.push(i);
        }
        for(int i=0;i<n;i++) cout<<f[i]<<" ";
        cout<<"\n";
    }
    system("pause");
}
// 5 1 6 7 2
// 5 1