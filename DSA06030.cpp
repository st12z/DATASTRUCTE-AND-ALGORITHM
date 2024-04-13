#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ve[n];
        int a[n];
        int cnt=0;
        int idx;
        for(int &x:a) cin>>x;
        for(int i=0;i<=n-1;i++){
            int check=1;
            for(int j=0;j<n-1-i;j++){
                if(a[j]>a[j+1]){
                    check=0;
                    swap(a[j],a[j+1]);
                }
            }
            if(check==1){
                break;
            }
            for(int x:a){
                ve[cnt].push_back(x);
            }
            cnt++;
        }
        for(int i=cnt-1;i>=0;i--){
            cout<<"Buoc "<<i+1<<": ";
            for(int x:ve[i]) cout<<x<<" ";
            cout<<"\n";
        }
    }

    system("pause");
}
// 2 7 3 6
// 
