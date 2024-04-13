#include <bits/stdc++.h>
using namespace std;
int a[9];
int check;
vector<int>ve[9];
int k;
int n;
string s;
int cnt=1;
void khoitao(){
    cin>>s;
    for(int i=1;i<=k;i++) a[i]=s[i-1]-'0';
    
    sort(a+1,a+k+1);
}
void out(){
    int sum=0;
    for(int i=1;i<=k;i++) sum=sum*10+a[i];
    ve[cnt].push_back(sum);
}
void sinh(){
    while(1){
        out();
        int i=k-1;
        while(a[i]>=a[i+1] && i>=1) i--;
        if(i==0) return;
        int j=k;
        while(a[j]<=a[i]) j--;
        swap(a[i],a[j]);
        int l=i+1;
        int r=k;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}
int main(){
    cin>>n>>k;
    while(n--){
        khoitao();
        sinh();
        cnt++;
    }
    for(int i=1;i<=cnt;i++){
        for(int x:ve[i]) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}

