#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    map<int,int>mp;
    for(int &x:a){
        cin>>x;
        mp[x]++;
    }
    
    for(auto x:a){
        if(mp[x]!=0){
            cout<<x<<" ";
            mp[x]=0;
        }
    }
    system("pause");
}

