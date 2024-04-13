#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    int res1=1e9;
    int res2=1e9;
    for(int i=1;i<=min(a[0],a[1]);i++){
        for(int j=1;j<=min(a[0],a[1]);j++){
            if(a[0]/i==a[1]/j){
                if(i+j<res1+res2){
                    res1=i;
                    res2=j;
                }
            }
        }
    }
    cout<<res1<<" "<<res2;
    system("pause");
}
//44477
//4*10^6+7*10^2
// TTXDDDTDX
// XTXDDDTDT
// XXTDDDTDT
// 18 27 16 22 6
// 1   2  3 4 5 6 7 8 9 10 11
// 18  9  6 4 3 3 2 2 2 1 1
// 27  13 9 6 5 4 3 3 3 2 2 