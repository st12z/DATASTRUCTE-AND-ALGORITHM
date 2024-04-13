#include <bits/stdc++.h>
using namespace std;
void lessRight(int a[],int b[],int n){
    stack<int>st;
    b[n-1]=n;
    st.push(n-1);
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && a[i]<=a[st.top()]) st.pop();
        if(st.empty()==1) b[i]=n;
        else b[i]=st.top();
        st.push(i);
    }
}
void lessLeft(int a[],int b[],int n){
    stack<int>st;
    b[0]=-1;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && a[i]<=a[st.top()]) st.pop();
        if(st.empty()==1) b[i]=-1;
        else b[i]=st.top();
        st.push(i);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int res1[n],res2[n];
        lessRight(a,res1,n);
        lessLeft(a,res2,n);
        int maxvalue=0;
        for(int i=0;i<n;i++){
            maxvalue=max((res1[i]-1-res2[i])*a[i],maxvalue);
        }
        cout<<maxvalue<<"\n";
    }
    system("pause");
}

