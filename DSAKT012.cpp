#include <bits/stdc++.h>
using namespace std;
int a[35];
int n;
int s;
long long minvalue=1e18;
int check=0;
void khoitao(){
    cin>>n>>s;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
}
void Try(int i,int cur,int sum){
    for(int j=cur;j<=n;j++){
        if(sum+a[j]<=s){
            if(sum+a[j]<s) Try(i+1,j+1,sum+a[j]);
            else{
                if(i<minvalue){
                    minvalue=i;
                    check=1;
                }
            }
        }
    }
}
int main(){
    khoitao();
    Try(1,1,0);
    if(check==0) cout<<-1;
    else cout<<minvalue;
    system("pause");
}