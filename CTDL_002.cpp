#include <bits/stdc++.h>
using namespace std;
int a[100];
int n;
int k;
int sum=0;
int cnt=0;
vector<int>ve[100];
void khoitao(){
	cin>>n>>sum;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1,greater<int>());
}
void Try(int cur){
	for(int i=cur;i<=n;i++){
		if(sum+a[i]<=k){
			sum=sum+a[cur];
			if(sum<=k) Try(cur+1)
		}
	}
}
int main(){
    khoitao();
    for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++) x[j]=j;
		sth(i);
	}
	for(int i=0;i<cnt;i++){
		for(int x:ve[i]) cout<<x<<" ";
		cout<<"\n";
	}
	cout<<cnt;
	system("pause");
}
