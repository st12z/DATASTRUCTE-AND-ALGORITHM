#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[41];
int cnt=0;
map<int,int>mp;
void khoitao(){
    mp.clear();
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>a[i];
        mp[a[i]]=1;
    }
}
void in(){
    cout<<cnt<<"\n";
}
void lk(){
        int i=k;
        while(a[i]==n-k+i && i>=1){
            i--;
        }
        if(i==0){
            cnt=k;
            return;
        }
        a[i]+=1;
        for(int j=i+1;j<=k;j++){
            a[j]=a[i]+j-i;
        }
        for(int i=1;i<=k;i++){
            if(mp[a[i]]==0) cnt++;
        }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cnt=0;
        khoitao();
        lk();
        in();
    }
    system("pause");
}
