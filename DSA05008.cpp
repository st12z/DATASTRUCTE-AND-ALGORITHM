#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;b
        int a[n];
        for(int &x:a) cin>>x;
        int L[n][k+1]={0};
        L[0][a[0]]=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=k;j++){
                if(L[i-1][j]==1 || (L[i-1][j-a[i]]==1 && j>=a[i])){
                    L[i][j]=1;
                }
            }
        }
        if(L[n-1][k]) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321

