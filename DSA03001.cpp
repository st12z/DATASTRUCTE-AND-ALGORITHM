#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    int a[]={ 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        for(int i=9;i>=0;i--){
            if(n==0) break;
            cnt=cnt+n/a[i];
            n=n%a[i];
        }
        cout<<cnt<<"\n";
    }
    system("pause");
}