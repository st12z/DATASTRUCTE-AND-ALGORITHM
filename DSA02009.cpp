#include <bits/stdc++.h>
using namespace std;
int a[21];
int sum;
int cnt=0;
int n;
int k;
int visited[21];
int x[21];
int check=0;
void Try(int s,int count){
    if(count==k){
        check=1;
        return;
    }
    if(check==1) return;
    for(int i=1;i<=n;i++){
        if(visited[i]==0){
            visited[i]=1;
            if(s+a[i]<sum){
                Try(s+a[i],count);
            }
            else if(s+a[i]==sum){
                Try(0,count+1);
            }
            visited[i]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cnt=0;
        check=0;
        memset(visited,0,sizeof(visited));
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int tong=0;
        for(int i=1;i<=n;i++) tong+=a[i];
        if(tong%k==0){
            sum=tong/k;
            Try(0,0);
            if(check==1) cout<<1;
            else cout<<0;
        }
        else{
            cout<<0;
        }
        cout<<"\n";
    }
    system("pause");
}


