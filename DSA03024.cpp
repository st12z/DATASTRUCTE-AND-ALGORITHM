#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.first<b.first) return 1;
    if(a.first==b.first){
        if(a.second<b.second) return 1;
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
        ve.push_back({-1,-1});
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            ve.push_back({x,y});
        }
        sort(ve.begin(),ve.end(),cmp);
        for(int i=1;i<=n;i++){
            int cnt=1;
            int k=ve[i].second;
            int g=n-i;
            if(g>maxvalue){for(int j=i+1;j<=n;j++){
                if(ve[j].first>=k){
                    cnt++;
                    k=ve[j].second;
                }
            }
            if(cnt>maxvalue) maxvalue=cnt;}
        }
        cout<<maxvalue;
        cout<<"\n";
    }
    system("pause");
}