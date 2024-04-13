#include <bits/stdc++.h>
using namespace std;
int n;
int a[21];
int k;
int cnt=0;
map<int,int>mp;
void khoitao(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>a[i];
        mp[a[i]]=1;
    }
}
void lk(){
    int i=k;
    while(a[i]==n-k+i && i>=1){
        i--;
    }
    if(i==0) return;
    a[i]+=1;
    for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    for(int i=1;i<=k;i++){
        if(mp[a[i]]==0) cnt++;
    }
    cout<<cnt<<"\n";
}
// 1243
int main(){
    int t;
    cin>>t;
    while(t--){
    mp.clear();
    cnt=0;
    khoitao();
    lk();
    if(cnt==0) cout<< mp.size()<<"\n";
    }
    system("pause");
}

