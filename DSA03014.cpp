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
ll x[1000001];
string s[1000001];
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=1e6;i++){
        x[i]=1ll*i*i*i;
        s[i]=to_string(x[i]);
    }
    while(t--){
        string s;
        cin>>s;
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