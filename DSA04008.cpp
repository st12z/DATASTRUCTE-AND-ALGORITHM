#include <bits/stdc++.h>
using namespace std;
#define ll long long
int N;
struct Matrix{
    ll fibo[11][11];
};
int mod=1e9+7;
struct Matrix operator *(Matrix A,Matrix B){
    Matrix C;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            C.fibo[i][j]=0;
            for(int k=0;k<N;k++){
                C.fibo[i][j]=(C.fibo[i][j]+A.fibo[i][k]*B.fibo[k][j]%mod)%mod;
            }
        }
    }
    return C;
}
struct Matrix luythua(Matrix A, int N){
    if(N==1) return A;
    if(N%2==1) return A*luythua(A,N-1);
    Matrix X=luythua(A,N/2);
    return X*X;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Matrix A;
        int K;
        cin>>N>>K;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++) cin>>A.fibo[i][j];
        }
        Matrix B=luythua(A,K);
        ll sum=0;
        for(int i=0;i<N;i++){
            sum=(sum+B.fibo[i][i])%mod;
        }
        cout<<sum<<"\n";
    }
}
// 0 1 1 2 3 5 8