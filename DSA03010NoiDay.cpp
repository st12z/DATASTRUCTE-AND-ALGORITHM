#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        priority_queue<ll,vector<ll>,greater<ll>>pq(a,a+n);
        ll sum=0;
        while(pq.size()!=1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            sum=sum+(x+y);
            pq.push(x+y);
        }
        cout<<sum;
        cout<<"\n";
    }
    system("pause");
}