#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;string u,v;
        cin>>n>>u>>v;
        string s[n];
        map<string,int>mp;
        set<string>se;
        for(int i=0;i<n;i++){
            cin>>s[i];
            se.insert(s[i]);
        }
        queue<pair<string,int>>q;
        q.push({u,1});
        se.erase(u);
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            if(top.first==v){
                cout<<top.second;
                break;
            }
            string s=top.first;
            for(int i=0;i<s.length();i++){
                char c=s[i];
                for(int j='A';j<='Z';j++){
                    s[i]=j;
                    if(se.find(s)!=se.end()){
                        q.push({s,top.second+1});
                        se.erase(s);
                    }
                    s[i]=c;
                }
            }
        }
        cout<<"\n";
    }
}
// a-(b+c)
