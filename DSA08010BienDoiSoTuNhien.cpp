#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<pair<int,int>>q;
        unordered_set<int>se;
        q.push({n,0});
        se.insert(n);
        int step;
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            if(p.first==1){
                step=p.second;
                break;
            }
            if(se.count(p.first-1)==0 && p.first-1>=1){
                se.insert(p.first-1);
                q.push({p.first-1,p.second+1});
            }
                for(int i=2;i<=sqrt(p.first);i++){
                    if(p.first%i==0){
                        if(se.count(p.first/i)==0){
                            q.push({p.first/i,p.second+1});
                        }
                    }
                }
        }
        cout<<step<<"\n";
    }
    system("pause");
}
// a-(b+c)