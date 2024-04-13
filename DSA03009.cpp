#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct work {
    int ms,end;
    int profit;
};
bool cmp(work a, work  b){
    if(a.profit>b.profit) return 1;
    if(a.profit==b.profit && a.end<b.end)  return 1;
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        struct work ds[n];
        for(int i=0;i<n;i++){
            cin>>ds[i].ms>>ds[i].end>>ds[i].profit;
        }
        sort(ds,ds+n,cmp);
        for(int i=0;i<n;i++){
            cout<<ds[i].ms<<" "<<ds[i].end<<" "<<ds[i].profit<<"\n";
        }
        int sumprofit=ds[0].profit;
        int count=1;
        for(int i=1;i<n;i++){
            if(ds[i].end>ds[i-1].end){
                sumprofit+=ds[i].profit;
                count++;
            }
        }
        cout<<count<<" "<<sumprofit<<"\n";
        cout<<"\n";
    }
    system("pause");
}
// 1 2 100
// 3 2 27
// 4 1 25
// 2 1 19
// 5 1 15 

// 

// 1 2
// 3 4
// 0 6
// 5 7
// 5 9
// 8 9