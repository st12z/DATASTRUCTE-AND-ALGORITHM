#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ve(n);
        ve.clear();
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ve.push_back(x);
        }
        sort(ve.begin(),ve.end());
        int r=n-1;
        int mid=(n-1)/2;
        int l=mid;
        int cnt=0;
        while(l>=0 && r>=mid){
            if(ve[r]>=2*ve[l]){
                r--;
                l--;
                cnt++;
            }
            else{
                l--;
            }
        }
        cout<<n-cnt*2+cnt;
        cout<<"\n";
    }
    system("pause");
}
// 4 7 7 6 5