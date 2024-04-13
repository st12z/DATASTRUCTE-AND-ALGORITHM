#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int &x:a) cin>>x;
    cout<<"Buoc 0: "<<a[0]<<"\n";
    for(int i=1;i<n;i++){
        int pos=i-1;
        int key=a[i];
        while(key<a[pos] && pos>=0){
            a[pos+1]=a[pos];
            pos--;
        }
        a[pos+1]=key;
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<=i;j++) cout<<a[j]<<" ";
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
