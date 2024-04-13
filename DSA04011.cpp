#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    ll powbinary[31];
    for(int i=0;i<=30;i++) powbinary[i]=pow(2,i);
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        ll sum1=0;
        ll sum2=0;
        for(int i=0;i<=s1.length()-1;i++){
            sum1=sum1+(s1[i]-'0')*powbinary[s1.length()-1-i];
        }
        for(int i=0;i<=s2.length()-1;i++){
            sum2=sum2+(s2[i]-'0')*powbinary[s2.length()-1-i];
        }
        cout<<sum1*sum2<<"\n";
    }
    system("pause");
}
// 0 1 1 2 3 5 8 13 21 34 