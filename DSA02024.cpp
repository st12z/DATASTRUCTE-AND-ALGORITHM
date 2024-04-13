#include <bits/stdc++.h>
using namespace std;
int n;
int a[21];
int x[21];
vector<string>ve;
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    x[1]=-1e9;
}
void out(int i){
    string word="";
    for(int j=1;j<=i;j++){
        word=word+to_string(x[j]);
        if(j!=i) word+=" ";
    }
    ve.push_back(word);
}
void Try(int i,int cur){
    for(int j=cur;j<=n;j++){
        if(i==1){
            x[i]=a[j];
            Try(i+1,j+1);
        }
        else{
            if(a[j]>x[i-1]){
                x[i]=a[j];
            if(i>=2){
                out(i);
            }
            if(i<n){
                Try(i+1,j+1);
            }}
        }        
    }
}
int main(){
    khoitao();
    Try(1,1);
    sort(ve.begin(),ve.end());
    for(string s:ve) cout<<s<<"\n";
    system("pause");
}