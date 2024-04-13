#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int n,m;
int cnt=0;
void nhap(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            cnt=0;
        }
    }
}

void Try(int x,int y){
    if((x==n && y==m)){
        cnt++;
        return;
    }
    if(x+1<=n){
        Try(x+1,y);
    }
    if(y+1<=m){
        Try(x,y+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nhap();
        Try(1,1);
        cout<<cnt<<"\n";
    }
    system("pause");
}