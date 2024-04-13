#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n;
        int a[n];
        for(int &x:a){
            cin>>x;
        }
        sort(a,a+n);
        int kc=1e9;
        for(int i=1;i<=n-1;i++){
            if(a[i]-a[i-1]<kc){
                kc=a[i]-a[i-1];
            }
        }
        cout<<kc;
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
