#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ve[n];
    int a[n];
    for(int &x:a) cin>>x;
    ve[0].push_back(a[0]);
    for(int i=1;i<=n-1;i++){
        int pos=i-1;
        int key=a[i];
        while(key<a[pos] && pos>=0){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=key;
        for(int j=0;j<=i;j++){
            ve[i].push_back(a[j]);
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for(int x:ve[i]) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
