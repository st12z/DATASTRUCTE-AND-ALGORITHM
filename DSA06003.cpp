#include <bits/stdc++.h>
#define ll long long
using namespace std;
int cmp(pair<int,int>a,pair<int,int>b){
    if(a.first<b.first) return 1;
    if(a.first==b.first && a.second<b.second) return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>m;
        int a[n];
        int b[m];
        int d[5]={0};
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        int cnt=0;
        for(int i=0;i<n;i++){
            int min=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[min]){
                    min=j;
                }
            }
            if(min!=i){
                swap(a[min],a[i]);
                cnt++;
            }
        }
        cout<<cnt<<"\n";
    }
    system("pause");
}
// 2 7 3 6
//