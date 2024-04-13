#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ve[n-1];
        int a[n];
        for(int &x:a) cin>>x;
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                }
            }
            for(int x:a){
                ve[i].push_back(x);
            }
        }
        for(int i=n-2;i>=0;i--){
            cout<<"Buoc "<<i+1<<": ";
            for(int x:ve[i]) cout<<x<<" ";
            cout<<"\n";
        }
    }
    
    system("pause");
}
// 2 7 3 6
// 
