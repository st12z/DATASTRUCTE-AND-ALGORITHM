#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int max=-1e9;
        for(int x:a){
            if(x>max) max=x;
        }
        int min=1e9;
        for(int x:b){
            if(x<min) min=x;
        }
        ll tich=1ll*max*min;
        cout<<tich<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
