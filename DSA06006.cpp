#include <bits/stdc++.h>
using namespace std;
int X;
bool cmp(int a,int b){
    return abs(X-a)<abs(X-b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int cnt[3]={0};
        for(int x:a){
            cnt[x]++;
        }
        for(int i=0;i<=2;i++){
            for(int j=1;j<=cnt[i];j++){
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    system("pause");
}

