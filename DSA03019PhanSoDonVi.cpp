#include <bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
void update(int &a,int &b,int c,int d){
    int mauc=lcm(b,d);
    int tu1=mauc/b*a;
    int tu2=mauc/d*c;
    int tu3=tu1-tu2;
    int mau3=mauc;
    int x=gcd(tu3,mau3);
    a=tu3/x;
    b=mau3/x;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==1){
            cout<<a<<"/"<<b;
        }
        else{
            while(a!=1){
                int x=(b/a)+1;
                cout<<1<<"/"<<x;
                cout<<" + ";
                update(a,b,1,x);
            }
            cout<<1<<"/"<<b;
        }
        cout<<"\n";
    }
    system("pause");
}
//44477
//4*10^6+7*10^2
// TTXDDDTDX
// XTXDDDTDT
// XXTDDDTDT
// 18 27 16 22 6
// 