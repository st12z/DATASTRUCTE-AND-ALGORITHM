#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        vector<int>ve[n+1];
        for(int x:a) ve[1].push_back(x);
        for(int i=2;i<=n;i++){
            for(int j=0;j<=n-i;j++){
                ve[i].push_back(ve[i-1][j]+ve[i-1][j+1]);
            }
        }
        for(int i=1;i<=n;i++){
            cout<<"[";
            for(int j=0;j<ve[i].size();j++){
                cout<<ve[i][j];
                if(j!=ve[i].size()-1) cout<<" ";
            }
            cout<<"]\n";
        }
    }
    system("pause");
}