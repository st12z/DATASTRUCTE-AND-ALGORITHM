#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        ll sum1=0;
        ll sum2=0;
     if(k<n-k)  { for(int i=0;i<n;i++){
            if(i<k) sum1+=a[i];
            else{
                sum2+=a[i];
            }
        }
     }
     else{
        for(int i=0;i<n;i++){
            if(i<n-k) sum1+=a[i];
            else{
                sum2+=a[i];
            }
        }
     }
     cout<<sum2-sum1<<"\n";
    }
    system("pause");
}