#include <bits/stdc++.h>
using namespace std;
int c[16][16];
int g;
int f=1e9;
int x[16];
int visited[16];
int cmin=1e9;
int d=0;
int n;
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>c[i][j];
            visited[i]=0;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c[i][j]<cmin) cmin=c[i][j];
        }
    }
    x[1]=1;
}
void Try(int i){
    for(int j=2;j<=n;j++){
        if(visited[j]==0){
            x[i]=j;
            d=d+c[x[i-1]][x[i]];
            visited[j]=1;
            g=d+cmin*(n-i+1);
            if(i<n && g<f){
                Try(i+1);
            }
            else if(i==n){
                if(d+c[x[n]][1]<f){
                    f=d+c[x[n]][1];
                }
            }
            visited[j]=0;
            d-=c[x[i-1]][x[i]];
        }
    }
}
int main(){
    khoitao();
    Try(2);
    cout<<f;
    system("pause");
}