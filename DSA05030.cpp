#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll path[26][26];
void solve(){
    for(int i=1;i<=25;i++){
        path[i][0]=1;
        path[0][i]=1;
    }
    for(int i=1;i<=25;i++){
        for(int j=1;j<=25;j++){
            path[i][j]=path[i-1][j]+path[i][j-1];
        }
    }
}
int main(){
    int t;
    cin>>t;
    solve();
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<path[x][y]<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321