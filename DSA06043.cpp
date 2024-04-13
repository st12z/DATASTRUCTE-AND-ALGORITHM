#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n;
        int a[n];
        int sum=0;
        for(int &x:a){
            cin>>x;
            sum+=x;
        }
        int temp=0;
        int x;
        int ok=0;
        for(int i=1;i<n-1;i++){
            temp+=a[i-1];
            if(temp==sum-(temp+a[i])){
                x=i;
                ok=1;
                break;
            }
        }
        if(ok==0) cout<<-1;
        else cout<<x+1;
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
