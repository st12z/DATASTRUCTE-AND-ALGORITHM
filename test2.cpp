#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[100001];
void sang(){
    for(int i=1;i<=100000;i++) prime[i]=i;
    for(int i=2;i<=100000;i++){
        int max=0;
        int value=prime[i];
        for(int j=2;j<=sqrt(value);j++){ 
            while(value%j==0){
                if(j>max){
                    max=j;
                }
                value/=j;
            }
        }
        if(value!=1){
            if(value>max) max=value;
        }
        prime[i]=max;
    }
}
int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        int l,r;
        cin>>l>>r;
        ll sum=0;
        for(int i=l;i<=r;i++) sum+=prime[i];
        cout<<sum<<"\n";
    }
    system("pause");
}
// 5 1 6 7 2
// 5 1 
