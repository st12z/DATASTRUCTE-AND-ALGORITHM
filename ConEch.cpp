#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int f[51];
    f[0]=1;
    f[1]=1;
    f[2]=2;
    for(int i=3;i<=50;i++){
        f[i]=f[i-1]+f[i-2]+f[i-3];
    }
    while(t--){
        int n;
        cin>>n;
        cout<<f[n];
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321

