#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
            mp[x]=1;
        }
        int max=-1e9;
        int min=1e9;
       for(int x:a){
            if(x > max) max=x;
            if(x <min) min=x;
        } 
        int cnt=0;
        for(int i=min;i<=max;i++){
            if(mp[i]==0) cnt++;
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
