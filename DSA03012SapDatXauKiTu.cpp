#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cnt[256]={};
int check(string s,int d){
    int i=0;
    int k=0;
    for(int i=0;i<256;i++){
        if(cnt[i]!=0)k++;
    }
    while(i<k){
        int p=cnt[i];
        for(int j=0;j<p;j++){
            if(i+j*d>s.length()-1) return -1;
        }
        i++;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;int d;
        cin>>d>>s;
        memset(cnt,0,sizeof(cnt));
        for(char x:s) cnt[x]++;
        sort(cnt,cnt+256,greater<int>());
        cout<<check(s,d);
        cout<<"\n";
    }
    system("pause");
}