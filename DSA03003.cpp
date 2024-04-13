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
        sort(a,a+n);
        ll sum1=0;
        ll sum2=0;
        for(int i=0;i<n;i++){
            if(i%2==0) sum1=sum1*10+a[i];
            else sum2=sum2*10+a[i];
        }
        cout<<sum1+sum2<<"\n";
    }
    system("pause");
}