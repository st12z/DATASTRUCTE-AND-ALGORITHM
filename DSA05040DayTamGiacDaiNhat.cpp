#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int tang[n],giam[n];
        for(int i=0;i<n;i++){
            tang[i]=giam[i]=1;
        }
        for(int i=1;i<n;i++){
            if(a[i]>=a[i-1]) tang[i]=tang[i-1]+1;
        }
        for(int i=n-2;i>=0;i--){
            if(a[i]>=a[i+1]) giam[i]=giam[i+1]+1;
        }
        int ans=tang[0]+giam[0]-1;
        for(int i=0;i<n;i++){
            ans=max(ans,tang[i]+giam[i]-1);
        }
        cout<<ans;
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321
// 1 1
// 1.5 0
