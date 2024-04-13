#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(string s){
    if(s.length()%2==1) return 0;
    int l=0;
    int r=s.size()-1;
    while(l<r){
        if(s[l]!=s[r]) return 0;
        l++;
        r--;
    }
    return 1;
}
int main(){
    queue<ll>q;
    q.push(4);
    q.push(7);
    map<ll,int>mp;
    mp[4]=1;
    mp[7]=1;
    while(!q.empty()){
        ll top=q.front();
        q.pop();
        mp[top]=1;
        if(top>=1e10) break;
        q.push(top*10+4);
        q.push(top*10+7);
    }
    int a,b;
    cin>>a>>b;
    ll sum=0;
    for(ll i=a;i<=b;i++){
        int cnt=1;
        while(mp[i]==0 && i<=b){
            i++;
            cnt++;
        }
        sum+=i*cnt;
    }
    cout<<sum;
}
// 