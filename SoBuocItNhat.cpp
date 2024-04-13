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
        int f[n]={};
        for(int i=0;i<n;i++){
            f[i]=1;
            for(int j=0;j<i;j++){
                if(a[j]>=a[i]){
                    f[i]=max(f[i],f[j]+1);
                }
            }
        }
        int maxvalue=*max_element(f,f+n);
        cout<<n-maxvalue<<"\n";
    }
    system("pause");
}
