#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
struct Matrix{
	ll f[11][11];
};
int N;
 Matrix operator*( Matrix A, Matrix B){
	 Matrix C;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			C.f[i][j]=0;
			for(int k=0;k<N;k++){
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%mod)%mod;
			}
		}
	}
	return C;
}
 Matrix luythua( Matrix A,ll K){
	if(K==1) return A;
	if(K%2==1) return A*luythua(A,K-1);
	 Matrix X=luythua(A,K/2);
	return X*X;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		 Matrix A;
		ll K,sum=0;
		cin>>N>>K;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++) cin>>A.f[i][j];
		}
		 Matrix B=luythua(A,K);
		for(int i=0;i<N;i++){
			sum=(sum+B.f[i][N-1])%mod;
		}
		cout<<sum<<"\n";
	}
	system("pause");
}
