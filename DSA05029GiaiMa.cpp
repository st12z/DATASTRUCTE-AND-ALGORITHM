#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int dp[s.length()+1];
        int check=0;
        if(s[0]=='0'){
            cout<<0<<"\n";
            continue;
        }
        dp[0]=1;
        for(int i=1;i<s.length();i++){
            if(s[i]=='0'){
                if(s[i-1]>'2' || s[i-1]=='0'){
                    dp[s.length()-1]=0;
                    break;
                }
                if(i==1) dp[i]=1;
                else dp[i]=dp[i-2];
            }
            else{
                dp[i]=dp[i-1];
                if(s[i-1]=='1' ||(s[i-1]=='2' && s[i]<='6')){
                    if(i==1) dp[i]+=1;
                    else{
                        dp[i]+=dp[i-2];
                    }
                }
            }
        }
        cout<<dp[s.length()-1]<<"\n";
    } 
    system("pause");
}