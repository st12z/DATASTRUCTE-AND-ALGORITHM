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
        int f[n];
        for(int i=0;i<n;i++) f[i]=a[i];
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j]){
                    f[i]=max(f[i],f[j]+a[i]);
                }
            }
        }
        cout<<*max_element(f,f+n);
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
