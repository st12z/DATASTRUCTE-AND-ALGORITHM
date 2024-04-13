#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        int f[s.length()][s.length()]={};
        for(int i=0;i<s.length();i++) f[i][i]=1;
        for(int k=1;k<=s.length()-1;k++){
            for(int i=0;i<=s.length()-1-k;i++){
                int j=i+k;
                if(s[i]==s[j]){
                    if(k==1){
                        f[i][j]=1;
                    }
                    else{
                        f[i][j]=f[i+1][j-1];
                    }
                }
            }
        }
        int x=-1;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<s.length();j++){
                if(f[i][j]==1){
                    x=max(j-i+1,x);
                }
            }
        }
        cout<<x;
        cout<<"\n";
	}
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
