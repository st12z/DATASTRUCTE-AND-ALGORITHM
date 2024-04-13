#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n][n];
        int dp[n][n]={0};
        int mark[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                dp[i][j]=a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            int idx;
            int max=-1e9;
            for(int j=0;j<n;j++){
                if(j!=i){
                    if(dp[0][j]>max){
                        max=dp[0][j];
                        idx=j;
                    }
                }
            }
            dp[1][i]=dp[1][i]+max;
            mark[1][i]=idx;
        }
        for(int i=2;i<n;i++){
            for(int j=0;j<n;j++){
                int idx;
                int max=-1e9;
                for(int k=0;k<n;k++){
                    if(k!=j){
                        if(mark[i-1][k]!=j){
                            if(dp[i-1][k]>max){
                                max=dp[i-1][k];
                                idx=k;
                            }
                        }
                    }
                }
                dp[i][j]=dp[i][j]+max;
                mark[i][j]=idx;
            }
        }
        int maxvalue=*max_element(dp[n-1],dp[n-1]+n);
        cout<<maxvalue;
        cout<<"\n";
    }
    system("pause");
}
// 123222444
// 444222321
// 
// 444222321

