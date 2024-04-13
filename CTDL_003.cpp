#include <bits/stdc++.h>
using namespace std;
int a[101];
int c[101];
int n,b;
int x[101];
int Xopt[101];
int Fopt=-1e9;
void khoitao(){
    for(int i=1;i<=n;i++) x[i]=0;
}
void xnp(){
    while(1){
        int sum=0;
        int f=0;
        for(int i=1;i<=n;i++){
            sum+=a[i]*x[i];
            f+=c[i]*x[i];
        }
        if(sum<=b){
            if(f>Fopt){
                Fopt=f;
                for(int i=1;i<=n;i++){
                    Xopt[i]=x[i];
                }
            }
        }
        int i=n;
        while(x[i]==1 && i>=1){
            x[i]=0;
            i--;
        }
        if(i==0) return;
        x[i]=1;
    }   
}
int main(){
    cin>>n>>b;
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    khoitao();
    xnp();
    cout<<Fopt<<"\n";
    for(int i=1;i<=n;i++) cout<<Xopt[i]<<" ";
    system("pause");
}
