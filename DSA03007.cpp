#include <bits/stdc++.h>
using namespace std;
#define ll long long
map<pair<int,int>,int>mp;
int gcd(int a,int b){
    if(b==0) return a;
    if(mp[{a,b}]!=0) return mp[{a,b}];
    mp[{a,b}]=gcd(b,a%b);
    return mp[{a,b}];
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
bool sosanh(int p,int q,int m,int n){
    int uc=lcm(q,n);
    p=uc/q*p;
    m=uc/n*m;
    return p>=m;
}
void truphanso(int &p,int &q,int m,int n){
    int uc=lcm(q,n);
    p=uc/q*p;
    m=uc/n*m;
    p=p-m;
    q=uc;
    uc=gcd(p,q);
    p/=uc;
    q/=uc;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        if(p==1) cout<<p<<"/"<<q<<"\n";
        else{
            int k=2;
            while(p!=1){
                while(sosanh(p,q,1,k)==0){
                    k++;
                }
                cout<<1<<"/"<<k<<" + ";
                truphanso(p,q,1,k);
            }
            cout<<1<<"/"<<q<<"\n";
        }

    }
    system("pause");
}
// 2/5=1/4+1/10+ 1/20
// 2/5=1/5+1/5