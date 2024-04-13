#include <bits/stdc++.h>
using namespace std;
int prime[1000001];
void sang(){
    for(int i=0;i<=1000000;i++) prime[i]=1;
    for(int i=2;i<=1000;i++){
        for(int j=i*i;j<=1000000;j+=i){
            if(prime[j]==1){
                prime[j]=0;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        int n;
        cin>>n;
        int ok=0;
        for(int i=2;i<=n/2;i++){
            if(prime[i] && prime[n-i]){
                cout<<i<<" "<<n-i;
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<-1;
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
