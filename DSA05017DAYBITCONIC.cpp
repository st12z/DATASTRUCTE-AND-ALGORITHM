#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int incre[n+1]={};
        int decre[n+1]={};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        incre[1]=a[1];
        decre[n]=a[n];
        for(int i=1;i<=n;i++){
            for(int j=1;j<i;j++){
                if(a[i]>a[j]){
                    incre[i]=max(incre[i],incre[j]+a[i]);
                }
            }
        }
        for(int i=n;i>=1;i--){
            for(int j=n;j>i;j--){
                if(a[i]>a[j]){
                    decre[i]=max(decre[i],decre[j]+a[i]);
                }
            }
        }
        int ans=incre[1]+decre[1]-a[1];
        for(int i=2;i<=n;i++){
            ans=max(ans,incre[i]+decre[i]-a[i]);
        }
        cout<<ans<<"\n";
    }
    system("pause");
}
// 1 15 51 45 33 100 12 18 9
// 1 