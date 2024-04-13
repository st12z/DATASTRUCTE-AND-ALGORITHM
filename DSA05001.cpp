#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        x.insert(0,"0");
        y.insert(0,"0");
        int m=x.length();
        int n=y.length();
        int c[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) c[i][j]=0;
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(x[i]==y[j]){
                    c[i][j]=c[i-1][j-1]+1;
                }
                else{
                    c[i][j]=max(c[i-1][j],c[i][j-1]);
                }
            }
        }
        cout<<c[m-1][n-1];
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 
// 444222321