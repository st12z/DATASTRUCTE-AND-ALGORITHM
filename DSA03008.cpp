#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second) return 1;
    if(a.second==b.second){
        if(a.first<b.first) return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int maxvalue=-1e9;
        vector<pair<int,int>>ve;
        int n;
        cin>>n;
        int s[n];
        int f[n];
        ve.push_back({-1,-1});
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            ve.push_back({x,y});
        }
        sort(ve.begin(),ve.end(),cmp);
        int begin=ve[1].second;
        int cnt=1;
        for(int i=2;i<=n;i++){
            if(ve[i].first>=begin){
                begin=ve[i].second;
                cnt++;
            }
        }
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}
// 6 16 18 22 27
// 2 5  5  6  7
// [6/a]=[16/2a+k]