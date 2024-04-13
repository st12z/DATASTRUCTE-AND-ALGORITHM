#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        queue<ll>q;
        q.push(1);
        while(1){
            ll top=q.front();
            q.pop();
            if(top%n==0){
                cout<<top;
                break;
            }
            q.push(top*10);
            q.push(top*10+1);
        }
        cout<<"\n";
    }
}