#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int i=0;
        int max[n+1];
        for(int i=0;i<n;i++){
            max[i]=1;
        }
        int tang=0;
        int giam=0;
        max[1]=2;
        if(a[1]>a[0]){
            tang=1;
        }
        else{
            giam=1;
        }
        for(int i=1;i<n-1;i++){
            if(giam==1){
                if(a[i]>a[i+1]){
                    max[i+1]=max[i]+1;
                    giam=1;
                }
                else if(a[i]<a[i+1]){
                    giam=0;
                    tang=1;
                    max[i+1]=2;
                }
            }
            else{
                if(a[i]<a[i+1]){
                    max[i+1]=max[i]+1;
                    tang=1;
                }
                else if(a[i]>a[i+1]){
                    tang=0;
                    giam=1;
                    max[i+1]=max[i]+1;
                }
            }
        }
        int maxv=-1e9;
        for(int i=0;i<n;i++){
            if(maxv<max[i]) maxv=max[i];
        }
        cout<<maxv;
        cout<<"\n";
    }
    system("pause");
}
// -2 0 1 3
// -2,0,1
// -2,0,3
// 
// 12 5 8 4 78 90 45 23
// 

