#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ti,tc,td;
        cin>>n;
        cin>>ti>>td>>tc;
        int f[n+2];
        f[1]=ti;
        f[2]=min(f[2-1]+ti,f[2/2]+tc);
        for(int i=3;i<=n+1;i++){
            if(i%2==0){
                f[i]=min(f[i-1]+ti,f[i/2]+tc);
            }
            else{
                f[i]=min(f[i-1]+ti,f[(i+1)/2]+tc+td);
            }
            f[i-1]=min(f[i]+td,f[i-1]);
        }
        cout<<f[n]<<"\n";
    }
}
// 1 15 51 45 33 100 12 18 9
// 1 