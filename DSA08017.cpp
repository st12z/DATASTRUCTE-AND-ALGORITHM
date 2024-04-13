#include <bits/stdc++.h>
using namespace std;
#define ll long long
int check(ll top,int n){
    int cnt=0;
    while(top!=0){
        if(top%10==8) cnt++;
        top/=10;
    }
    return cnt==n;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<ll>q;
        q.push(6);
        q.push(8);
        vector<ll>ve;
        while(1){
            ll top=q.front();
            q.pop();
            if(check(top,n)){
                ve.push_back(top);
                break;
            }
            ve.push_back(top);
            q.push(top*10+6);
            q.push(top*10+8);
        }
        cout<<ve.size()<<"\n";
        for(int i=ve.size()-1;i>=0;i--) cout<<ve[i]<<" ";
        cout<<"\n";
    }
}