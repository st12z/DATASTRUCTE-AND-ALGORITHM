#include <bits/stdc++.h>
using namespace std;
void NextGreater(int n,int a[],int f1[]){
    f1[n]=-1;
    stack<int>st;
    st.push(n);
    for(int i=n-1;i>=1;i--){
        while(!st.empty() && a[i]>=a[st.top()]){
            st.pop();
        }
        if(st.empty()) f1[i]=-1;
        else f1[i]=st.top();
        st.push(i);
    }
}
void RightSmaller(int n,int a[],int f2[]){
    f2[n]=-1;
    stack<int>st;
    st.push(n);
    for(int i=n-1;i>=1;i--){
        while(!st.empty() && a[i]<=a[st.top()]){
            st.pop();
        }
        if(st.empty()) f2[i]=-1;
        else f2[i]=st.top();
        st.push(i);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int f1[n+1],f2[n+1];
        RightSmaller(n,a,f2);
        NextGreater(n,a,f1);
        for(int i=1;i<=n;i++){
            if(f1[i]==-1) cout<<-1<<" ";
            else cout<<a[f2[f1[i]]]<<" ";
        }
        cout<<"\n";
    }
    system("pause");
}

