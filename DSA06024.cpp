#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int &x:a) cin>>x;
    for(int i=0;i<n-1;i++){
        int pos=i;
        int check=0;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[pos]){
                pos=j;
                check=1;
            }
        }
        swap(a[i],a[pos]);
         cout<<"Buoc "<<i+1<<": ";
            for(int x:a) cout<<x<<" ";
            cout<<"\n";}
    system("pause");
}
// 2 7 3 6
// 
