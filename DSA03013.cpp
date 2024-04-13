#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second) return 1;
    if(a.second==b.second){
        if(a.first<b.first) return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        string s;
        cin>>s;
        int fre[256]={0};
        for(int i=0;i<s.length();i++) fre[s[i]]++;
        vector<int>freq;
        for(int i=0;i<256;i++){
            if(fre[i]){
                fre.push_back(fre[])
            }
        }
        cout<<"\n";
    }
    system("pause");
}