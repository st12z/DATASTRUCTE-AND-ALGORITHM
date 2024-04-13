#include <bits/stdc++.h>
using namespace std;
int X;
bool cmp(int a,int b){
    return abs(X-a)<abs(X-b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int &x:a){
            cin>>x;
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int tmp=a[i]+a[j];
                if(tmp==k){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
