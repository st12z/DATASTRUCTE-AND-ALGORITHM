#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1e9+7;
struct Matrix{
    ll f[2][2];
};
//1000000000
Matrix operator*(Matrix A,Matrix B){
    Matrix C;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            C.f[i][j]=0;
            for(int k=0;k<2;k++){
                C.f[i][j]=(C.f[i][j]+(A.f[i][k]%mod*B.f[j][k]%mod)%mod)%mod;
            }
        }
    }
    return C;
}
Matrix luythua(Matrix A,ll k){
    if(k==1) return A;
    if(k%2==1) return A*luythua(A,k-1);
    Matrix X=luythua(A,k/2);
    return X*X;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        Matrix A;
        A.f[0][0]=1;A.f[0][1]=1;A.f[1][0]=1;A.f[1][1]=0;
        Matrix B=luythua(A,n);
        cout<<B.f[0][1]<<"\n";
    }
    system("pause");
}
// 0 1 1 2 3 5 8 13 21 34 