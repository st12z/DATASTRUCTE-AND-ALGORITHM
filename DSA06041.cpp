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
        int check=1;
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
            mp[x]++;
        }
        int ok=1;
        for(int x:a){
            if(mp[x]>n/2){
                cout<<x;
                ok=0;
                break;
            }
        }
        if(ok==1) cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
