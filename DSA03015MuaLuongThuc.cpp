#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
        if(s*m>(s-s/7)*n) cout<<-1;
        else{
            for(int i=1;i<=s-s/7;i++){
                if(n*i>=s*m){
                    cout<<i;break;
                }
            }
        }
        cout<<"\n";   
    }
    system("pause");
}