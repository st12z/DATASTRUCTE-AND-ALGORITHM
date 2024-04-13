#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int>a[n];
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a[i].first=x;
            a[i].second=y;
        }
        sort(a,a+n,cmp);
        int x=a[0].first;
        int y=a[0].second;
        int cnt=1;
        for(int i=1;i<n;i++){
            if(a[i].first>=y){
                y=a[i].second;
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