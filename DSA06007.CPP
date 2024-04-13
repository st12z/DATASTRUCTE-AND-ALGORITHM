#include <bits/stdc++.h>
using namespace std;
int X;
bool cmp(int a,int b){
    return abs(X-a)<abs(X-b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int &x:a){
            cin>>x;
        }
        for(int i=0;i<n;i++) b[i]=a[i];
        sort(a,a+n);
        int bd,kt;
        int ok=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[i]) continue;
            if(ok==0) {
                bd=i;
                ok=1;
            }
            kt=i;
        }
        cout<<bd+1<<" "<<kt+1;
        cout<<"\n";
    }
    system("pause");
}

