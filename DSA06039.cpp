#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
            mp[x]++;
        }
        int ok=0;
        for(int i=0;i<n;i++){
            if(mp[a[i]]>=2){
                ok=a[i];
                break;
            }
        }
        if(ok==0) cout<<"NO";
        else cout<<ok;
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
