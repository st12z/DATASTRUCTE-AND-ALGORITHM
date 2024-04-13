#include <iostream>
using namespace std;
int a[50];
int n;
int x;
int scs(){
    int temp=n;
    int cnt=0;
    while(temp!=0){
        cnt++;
        temp/=10;
    }
    return cnt;
}
void khoitao(){
    for(int i=1;i<x;i++) a[i]=0;
    a[x]=9;
}
long long check(){
    long long sum=0;
    for(int i=1;i<=x;i++) sum=sum*10+a[i];
    return sum;
}
void xnp(){
	while(1){
        if(check()%n==0){
            cout<<check()<<"\n";
            return;
        }
        int i=x;
        while(a[i]==9 && i>=1){
            a[i]=0;
            i--;
        }
        if(i==0){
            x+=1;
            khoitao();
        }
        a[i]=9;
	}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        x=scs();
        khoitao();
        xnp();
    }
	system("pause");
}
