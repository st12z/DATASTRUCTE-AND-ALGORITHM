#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        vector<int>ve;
        for(int &x:a) cin>>x;
        multiset<int>ms;
        for(int i=0;i<k;i++){
            ms.insert(a[i]);
        }
        for(int i=k;i<=n-1;i++){
            cout<<*ms.rbegin()<<" ";
            ms.erase(ms.find(a[i-k]));
            ms.insert(a[i]);
        }
        cout<<*ms.rbegin();
        cout<<"\n";
    }

    system("pause");
}
// 2 7 3 6
// 
