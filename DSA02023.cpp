#include <bits/stdc++.h>
using namespace std;
vector<string>ve;
set<string>se;
int x[30];
int n,k;
void khoitao(){
    for(int i=1;i<=k;i++) x[i]=i;
    x[0]=0;
}
void in(){
    for(int i=1;i<=k;i++){
        cout<<ve[x[i]]<<" ";
    }
    cout<<"\n";
}
void Try(int m){
    for(int j=x[m-1]+1;j<=n-k+m;j++){
        x[m]=j;
        if(m==k) in();
        else{
            Try(m+1);
        }
    }
}
// Bac Dong Nam Tay;
// 1 2
// 1 3
// 1 4
// 2 3
// 2 4
// 3 4
int main(){
    cin>>n>>k;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        se.insert(s);
    }
    ve.push_back(" ");
    for(auto it:se){
        ve.push_back(it);
    }
    n=se.size();
    khoitao();
    Try(1);
    system("pause");
}