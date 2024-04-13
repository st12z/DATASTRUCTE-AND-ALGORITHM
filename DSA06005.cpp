#include <bits/stdc++.h>
using namespace std;
int X;
bool cmp(int a,int b){
    return abs(X-a)<abs(X-b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        sort(a,a+n);
        sort(b,b+m);
        vector<int>ve1,ve2;
        int i=0,j=0;
        while(i<n && j<m){
            if(a[i]==b[j]){
                ve2.push_back(a[i]);
                ve1.push_back(b[j]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                ve1.push_back(a[i]);
                i++;
            }
            else{
                ve1.push_back(b[j]);
                j++;
            }
        }
        while(i<=n-1) ve1.push_back(a[i++]);
        while(j<=m-1) ve1.push_back(b[j++]);
        for(int x:ve1) cout<<x<<" ";
        cout<<"\n";
        for(int x:ve2) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}

