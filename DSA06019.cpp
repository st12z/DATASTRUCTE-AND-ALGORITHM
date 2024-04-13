#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
            mp[x]++;
        }
        vector<pair<int,int>>ve;
        for(auto it:mp){
            ve.push_back({it.first,it.second});
        }
        for(int i=0;i<ve.size();i++){
            for(int j=0;j<ve.size()-i-1;j++){
                if(ve[j].second<ve[j+1].second){
                    swap(ve[j],ve[j+1]);
                }
            }
        }
        for(int i=0;i<ve.size();i++){
            for(int j=0;j<ve[i].second;j++){
                cout<<ve[i].first<<" ";
            }
        }
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
