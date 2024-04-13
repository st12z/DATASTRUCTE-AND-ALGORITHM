#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cmp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int d4,d7;
        int res4=1e6;
        int res7=1e6;
        string res="";
        int ok=0;
        for(int i=n;i>=0;i--){
            if(n-4*i>=0 && (n-4*i)%7==0){
                d4=i;
                d7=(n-4*i)/7;
                if(d4+d7<res4+res7){
                    res4=d4;
                    res7=d7;
                }
                else if(d4+d7==res4+res7){
                    if(d7<res7){
                        res7=d7;
                    }
                }
            }
        }
        if(res4==1e6 && res7==1e6) cout<<-1;
        else{
            for(int i=0;i<d4;i++) cout<<'4';
            for(int i=0;i<d7;i++) cout<<'7';
        }
        cout<<"\n";
    }
    system("pause");
}
//44477
//4*10^6+7*10^2