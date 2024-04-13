#include <bits/stdc++.h>
using namespace std;
int a[21];
int sum;
int cnt=0;
int n;
int k;;
void Try(int s,int count,int i){
    if(count==k && i==n+1){
        cnt++;
    }
    if(s+a[i]<=sum && i+1<=n+1){
        Try(s+a[i],count,i+1);
        Try(0,count+1,i+1);
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cnt=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        sum=accumulate(a+1,a+n+1,0);
        if(sum%k==0){
            sum/=k;
            Try(0,0,1);
            cout<<cnt;
        }
        else{
            cout<<"0";
        }
        cout<<"\n";
    }
 
}


