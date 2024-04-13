#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int x[100];
int n,k;
vector<int>ve[11];
void khoitao(){
    for(int i=1;i<=n;i++) x[i]=i;
}
int check(){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=a[i][x[i]];
    }
    return sum==k;
}
int cnt=0;
void hvkt(){
    while(1){
        if(check()){
            for(int i=1;i<=n;i++){
                ve[cnt].push_back(x[i]);
            }
            cnt++;
        }
        int i=n-1;
        while(x[i]>=x[i+1] && i>=1){
            i--;
        }
        if(i==0) return;
        int j=n;
        while(x[j]<x[i]) j--;
        swap(x[i],x[j]);
        int l=i+1;
        int r=n;
        while(l<r){
            swap(x[l],x[r]);
            l++;
            r--;
        }
    }
}
int main(){
        cin>>n;
        cin>>k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        khoitao();
        hvkt();
        cout<<cnt<<"\n";
        for(int i=0;i<cnt;i++){
            for(int x:ve[i]) cout<<x<<" ";
            cout<<"\n";
        }
    system("pause");
}

