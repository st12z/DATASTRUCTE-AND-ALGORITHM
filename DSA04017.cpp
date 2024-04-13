#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int  pos;
        cin>>n;;
        int a[n],b[n-1];
        for(int &x:a) cin>>x;
        for(int &y:b) cin>>y;
        int i=0;
        while(i<=n-2 && a[i]==b[i]){
            i++;
        }
        cout<<i+1;
        cout<<"\n";       
    }
    system("pause");
}