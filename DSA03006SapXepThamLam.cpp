#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i].first=x;
            a[i].second=i;
        }
        sort(a,a+n);
        int check=1;
        for(int i=0;i<n;i++){
            if(a[i].second!=i && a[i].second !=n-1-i){
                check=0;
                break;
            }
        }
        if(check==0) cout<<"No";
        else cout<<"Yes";
        cout<<"\n";
    }
    system("pause");
}