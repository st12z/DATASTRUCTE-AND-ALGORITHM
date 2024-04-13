#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<string>q;
        q.push("1");
        vector<string>ve;
        int cnt=1;
        while(ve.size()<n){
            string top=q.front();
            ve.push_back(top);
            q.pop();
            q.push(top+"0");
            q.push(top+"1");
        }
        for(string x:ve) cout<<x<<" ";
        cout<<"\n";
    }
}