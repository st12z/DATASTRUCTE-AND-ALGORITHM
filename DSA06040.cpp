#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a[x],b[y],c[z];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;
        for(int &x:c) cin>>x;
        int i=0,j=0,k=0;
        vector<int>ve;
        while(i<=x-1 && j<=y-1 && k<=z-1){
            int temp=min(a[i],min(b[j],c[k]));
            if(a[i]==temp && b[j]==temp && c[k]==temp){
                ve.push_back(a[i]);
                i++;
                j++;
                k++;
            }
            if(a[i]==temp) i++;
            if(b[j]==temp) j++;
            if(c[k]==temp) k++;
        }
        if(ve.size()==0) cout<<-1;
        else{
            for(int x:ve) cout<<x<<" ";
        }
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
