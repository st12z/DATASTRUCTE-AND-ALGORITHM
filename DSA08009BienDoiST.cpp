#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        unordered_set<int>se;
        queue<pair<int,int>>q;
        q.push({a,0});
        se.insert(a);
        while(!q.empty()){
            pair<int,int> top=q.front();
            q.pop();
            if(top.first==b){
                cout<<top.second;
                break;
            }
            if(se.count(top.first-1)==0 && top.first-1>=0){
                q.push({top.first-1,top.second+1});
                se.insert(top.first-1);
            }
            if(se.count(top.first*2)==0 && top.first<=b){
                q.push({top.first*2,top.second+1});
                se.insert(top.first*2);
            }
        }
        cout<<"\n";
    }
        
}