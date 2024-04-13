#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int a[n],b[m],c[k];
        for(int &x :a) cin>>x;
        for(int &x:b) cin>>x;
        for(int &x:c) cin>>x;
        int x=0;
        int y=0;
        int z=0;
        int check=0;
        while(x<=n-1 && y<=m-1 && z<=k-1){
            int minvalue=min(a[x],min(b[y],c[z]));
            if(minvalue==a[x] && minvalue==b[y] && minvalue==c[z]){
                cout<<minvalue<<" ";
                x++;y++;z++;
                check=1;
            }
            else if(minvalue==a[x]){
                x++;
            }
            else if(minvalue==b[y]) y++;
            else{
                z++;
            }
        }
        if(check==0) cout<<"NO";
        cout<<"\n";   
    }
    system("pause");
}