#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int f[1005][1005];
int tinh(string s1,string s2){
    memset(f,0,sizeof(f));
    int n=s1.length(),m=s2.length();
    for(int i=1;i<=s1.length();i++){
        for(int j=1;j<=s2.length();j++){
            if(s1[i-1]==s2[j-1]){
                f[i][j]=f[i-1][j-1]+1;
            }
            else{
                f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    return f[s1.length()][s2.length()];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<tinh(s1,s2)<<"\n";
    }
}
// 152
// aebcde
// aecb
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
//{1, 15, 51, 45, 33, 100, 12, 18, 9}
//{1, 15, 51, 100, 18, 9}