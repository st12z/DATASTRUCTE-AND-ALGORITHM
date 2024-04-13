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
        int check=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                check=1;
            }
        }
        if(check==0) break;
        cout<<"Buoc "<<i+1<<": ";
        for(int x:a) cout<<x<<" ";
        cout<<"\n";       
    }
    system("pause");
}
// 2 7 3 6
// 
