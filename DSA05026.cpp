#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int main(){
    int n,k;
    cin>>k>>n;
    int f[n+1][k+1]={0};
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];
    int minvalue=*min_element(a+1,a+n+1);
    for(int i=1;i<=n;i++) f[i][a[i]]=1;
    for(int i=2;i<=n;i++){
        for(int j=minvalue;j<=k;j++){
            if(f[i-1][j]==1 || (f[i-1][j-a[i]]==1 && j>=a[i])){
                f[i][j]=1;
            }
        }
    }
    for(int j=k;j>=1;j--){
        if(f[n][j]==1){
            cout<<j;
            break;
        }
    }
}
// 152
// 81 58 42 33 61
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
