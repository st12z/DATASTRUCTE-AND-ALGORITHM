#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long &x:a) cin>>x;
        priority_queue<long long,vector<long long>,greater<long long>>pq(a,a+n);
        long long sum=0;
        while(pq.size()!=1){
            long long x=pq.top();
            pq.pop();
            long long y=pq.top();
            pq.pop();
            sum=sum+x+y;
            pq.push(x+y);
        }
        cout<<sum;
        cout<<"\n";
    }
    system("pause");
}