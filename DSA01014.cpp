#include <iostream>
using namespace std;
int a[21];
int n,k,s;
void khoitao(){
	for(int i=1;i<=k;i++) a[i]=i;
}
bool check(){
	int sum=0;
	for(int i=1;i<=k;i++) sum+=a[i];
	return sum==s;
}
void in(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<"\n";
}
int count=0;
void sth(){
	while(1){
		if(check()){
			count++;
		}
		int i=k;
		while(a[i]==n-k+i && i>=1){
			i--;
		}
		if(i==0) return;
		a[i]+=1;
		for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
	}
}
int main(){
	while(1){
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0) break;
		khoitao();
		if(k<=n) sth();
		cout<<count<<"\n";
	}
	system("pause");
}
