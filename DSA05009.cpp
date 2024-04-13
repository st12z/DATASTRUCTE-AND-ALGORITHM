#include <bits/stdc++.h>
using namespace std;
int n;
int visited[11];
int a[101];
int tong;
int check;
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        tong+=a[i];
    }
}
void out(){ 
}
void Try(int i,int sum){
    for(char j=i;j<=n;j++){
        if(sum+a[j]<=tong/2){
            if(sum+a[j]==tong/2){
                check=1;
            }
            else if(sum+a[j]<tong/2 && check==0){
                Try(i+1,sum+a[j]);
            }
        }  
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        tong=0;
        khoitao();
        check=0;
        if(tong%2==1) cout<<"NO";
        else{
            Try(1,0);
            if(check==1) cout<<"YES";
            else cout<<"NO";
        }
        cout<<"\n";
    }
    system("pause");
}

