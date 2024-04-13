#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++) a[i]=1ll*a[i]*a[i];
        int check=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ll temp=a[i]+a[j];
                if(binary_search(a+j+1,a+n,temp)){
                    check=1;
                    break;
                } 
            }
            if(check==1) break;
        }
        if(check==1) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}
// 1 9 16 25 64
// 
