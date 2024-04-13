#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

        int n;
        cin>>n;
        vector<int>ve[n-1];
        int a[n];
        for(int &x:a) cin>>x;
        for(int i=0;i<=n-2;i++){
            int pos=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[pos]){
                    pos=j;
                }
            }
            swap(a[i],a[pos]);
            for(int x:a){
                ve[i].push_back(x);
            }
        }
        for(int i=n-2;i>=0;i--){
            cout<<"Buoc "<<i+1<<": ";
            for(int x:ve[i]) cout<<x<<" ";
            cout<<"\n";
        }

    
    system("pause");
}
// 2 7 3 6
// 
