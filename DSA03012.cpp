#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt[26]={0};
        for(int i=0;i<s.length();i++) cnt[s[i]-'a']++;
        int max=-1e9;
        for(int i=0;i<s.length();i++){
            if(cnt[s[i]-'a']>max) max=cnt[s[i]-'a'];
        }
        if(s.length()-max>=max-1) cout<<1;
        else cout<<-1;
        cout<<"\n";
    }
    system("pause");
}