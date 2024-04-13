#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        long long a[n];
        for(long long &x:a) cin>>x;
        map<long long,int>mp;
        for(int x:a){
            mp[x]++;
        }
        long long cnt=0;
        for(int i=0;i<n;i++){
            if(mp[a[i]]!=0){
                if(mp[k-a[i]]!=0 && k-a[i]!=a[i]){
                    cnt+=mp[k-a[i]];
                }
                else if(mp[k-a[i]]!=0){
                    cnt=cnt+mp[k-a[i]]-1;
                }
                mp[a[i]]-=1;
            }
            
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
