#include <bits/stdc++.h>
using namespace std;
int a[21];
int cnt;
int n;
void init(){
    cin>>n;
    a[1]=n;
    cnt=1;
}
void sinh(){
    while(1){
        for(int i=1;i<=cnt;i++) cout<<a[i]<<" ";
        cout<<"\n";
        int i=cnt;
        while(i>=1 && a[i]==1){
            i--;
        }
        if(i==0){
            return;
        }
        a[i]--;
        int d=cnt-i+1;
        int q=d/a[i];
        int r=d%a[i];
        cnt=i;
        if(q){
            for(int j=1;j<=q;j++){
                ++cnt;
                a[cnt]=a[i];
            }
        }
        if(r){
            ++cnt;
            a[cnt]=r;
        }
    }
}
int main(){
    init();
    sinh();
    system("pause");
}
// 213222444
// 443222412
// 
// 444222321

