#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    ll sum=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x>0) sum+=2*x;
    }
    cout<<sum;
    system("pause");
}