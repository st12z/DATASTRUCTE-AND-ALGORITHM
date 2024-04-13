#include <iostream>
using namespace std;
int n;
int a[11];
int sum=0;
void out(int m){
    cout<<'(';
    for(int i=1;i<m;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[m]<<')'<<" ";
}
void Try(int m,int cur){
    for(int i=cur;i>=1;i--){
        if(sum+i<=n){
            a[m]=i;
            sum+=i;
            if(sum==n){
                out(m);
            }
            if(sum<n){
                Try(m+1,i);
            }
            sum-=i;
        }
    }
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        sum=0;
        Try(1,n);
        cout<<"\n";
    }
	system("pause");
}
