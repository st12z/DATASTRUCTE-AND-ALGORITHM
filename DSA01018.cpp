#include <iostream>
using namespace std;
int a[1004];
int n,k;
void khoitao(){
    cin>>n>>k;
    for(int i=1;i<=k;i++){
        cin>>a[i];
    }
}
bool check(){
    for(int i=1;i<=k;i++){
        if(a[i]!=i) return 0;
    }
    return 1;
}
// 1345678 1 3 4 5 6 7 9
void sth(){
    if(check()){
        for(int i=1;i<=k;i++) a[i]=n-k+i;
        for(int i=1;i<=k;i++) cout<<a[i]<<" ";
        return;
    }
    int i=k;
    while(a[i]-a[i-1]==1 && i>=2){
        i--;
    }
    if(i==1){
        a[i+1]=a[i+1]-1;
        for(int j=i+1;j<=k;j++) a[j]=n-k+j;
    }
    a[i]-=1;
    for(int j=i+1;j<=k;j++){
        a[j]=n-k+j;
    }
    for(int i=1;i<=k;i++) cout<<a[i]<<" ";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        sth();
        cout<<"\n";
    }
	system("pause");
}
// 356789 3 5 6 7 8 10    3 5 6 7 9 10    3 5 6 8 9 10     3 5 7 8 9 10      3 6 7 8 9 10