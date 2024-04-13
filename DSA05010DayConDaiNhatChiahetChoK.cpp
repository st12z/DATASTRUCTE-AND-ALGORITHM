#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        int f[n+1][100001]={};
        for(int i=0;i<n;i++) f[i][a[i]]=1;
        for(int i=1;i<n;i++){
            for(int j=1;j<=100000;j++){
                if(f[i-1][j]==1 || (f[i-1][j-a[i]]==1 && j>=a[i])) f[i][j]=1;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<=100000;j++){
                if(f[i][j]==1 && f[i][j]%k==0){
                    
                }
            }
        }
    } 
    system("pause");
}


