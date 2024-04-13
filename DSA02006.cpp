#include <bits/stdc++.h>
using namespace std;
int a[21];
int check,k;
int b[21];
int n;
void out(int j){
    cout<<"[";
    for(int i=1;i<j;i++){
        cout<<b[i]<<" ";
    }
    cout<<b[j];
    cout<<"]";
}
void Try(int j,int sum,int cur){
    for(int i=cur;i<=n;i++){
        if(sum+a[i]<=k){
            b[j]=a[i];
            if(sum+a[i]<k){
                Try(j+1,sum+a[i],i);
            }
            else{
                out(j);
                check=1;
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        check=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        Try(1,0,1);
        if(check==0) cout<<-1;
        cout<<"\n";
    }
    system("pause");
}