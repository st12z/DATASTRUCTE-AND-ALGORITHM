#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        int cnt[26]={};
        for(int i=0;i<s.length();i++){
            cnt[(int)s[i]-65]++;
        }
        priority_queue<int>pq;
        for(int i=0;i<26;i++){
            if(cnt[i]!=0) pq.push(cnt[i]);
        }
        while(k){
            int x=pq.top();
            pq.pop();
            x--;
            k--;
            pq.push(x);
        }
        ll sum=0;
        while(!pq.empty()){
            sum+=1ll*pq.top()*pq.top();
            pq.pop();
        }
        cout<<sum<<"\n";
    }
    system("pause");
}
// a-(b+c)
