#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[n];
        string word="";
        for(int i=0;i<n;i++){
            cin>>s[i];
            word+=s[i];
        }
        sort(word.begin(),word.end());
        map<char,int>mp;
        for(int i=0;i<word.length();i++){
            if(mp[word[i]]==0) cout<<word[i]<<" ";
            mp[word[i]]=1;
        }
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
