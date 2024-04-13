#include <bits/stdc++.h>
using namespace std;
int n;
int a[21];
int k;
vector<int>b;
void khoitao(){
    cin>>n>>k;
    map<int,int>mp;
    int cnt[1001]={0};
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    b.push_back(0);
    for(auto x:mp){
        b.push_back(x.first);
    }
    n=mp.size();
    for(int i=1;i<=k;i++) a[i]=i;
}
void in(){
    for(int i=1;i<=k;i++){
        cout<<b[a[i]]<<" ";
    }
    cout<<"\n";
}
void lk(){
    while(1){
        in();
        int i=k;
        while(a[i]==n-k+i && i>=1){
            i--;
        }
        if(i==0) return;
        a[i]+=1;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
}
// 1243
int main(){
    khoitao();
    lk();
    system("pause");
}

