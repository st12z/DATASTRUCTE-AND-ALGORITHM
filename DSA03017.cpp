#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        string s;
        cin>>k>>s;
        priority_queue<int,vector<int>>pq;
        int cnt[256]={0};
        for(int i=0;i<s.length();i++){
            cnt[s[i]]++;
        }
        for(int i=0;i<256;i++){
            if(cnt[i]!=0){
                pq.push(cnt[i]);
            }
        }
        while(k!=0){
            int x=pq.top();
            pq.pop();
            x-=1;
            k-=1;
            pq.push(x);
        }
        int sum=0;
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            sum=sum+x*x;
        }
        cout<<sum<<"\n";
    }
    system("pause");
}
// 3 2 1
//k =3 
// 7 4 2
// 6 4 2
// 5 4 2
//