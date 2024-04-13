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
        for(int &x:a){
            cin>>x;
        }
        int min1=1e9;
        int min2=1e9;
        for(int i=0;i<n;i++){
            if(a[i]<min1){
                min2=min1;
                min1=a[i];
            }
            else if(a[i]>min1 && a[i]<min2){
                min2=a[i];
            }
        }
        if(min2==1e9) cout<<-1;
        else{
            cout<<min1<<" "<<min2;
        }
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
