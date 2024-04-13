#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    int length[n];
    for(int i=0;i<n;i++) length[i]=1;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]==1){
            length[i]=length[i-1]+1;
        }
    }
    for(int i=0;i<n;i++){
        
    }
    system("pause");
}
// 213222444
// 443222412
// 
// 444222321

