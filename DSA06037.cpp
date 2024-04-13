#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int max=-1e9+1;
        int min=1e9+1;
        int maxvalue[n+10];
        int minvalue[n+10];
        int idx1,idx2;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]>max){
                idx2=i;
                max=a[i];
            }
            if(a[i]<min){
                min=a[i];
                idx1=i;
            }
        }
        if(idx1==idx2){
            cout<<n-1<<"\n";
            for(int i=1;i<=n-1;i++) cout<<i<<" ";
        }
        else if(idx2<idx1){
            cout<<0<<"\n";
        }
        else{
            int l=idx1;
            int r=idx2;
            vector<int>ve;
            int giatrimax=-1e9+1;
            int giatrimin=1e9+1;
            int cnt=0;
            for(int j=0;j<=idx1;j++){
                if(a[j]>giatrimax) giatrimax=a[j];
            }
            maxvalue[idx1]=giatrimax;
            for(int j=idx1+1;j<r;j++){
                if(a[j]>maxvalue[j-1]){
                    maxvalue[j]=a[j];
                }
                else{
                    maxvalue[j]=maxvalue[j-1];
                }
            }
            for(int j=idx2;j<=n-1;j++){
                if(a[j]<giatrimin) giatrimin=a[j];
            }
            minvalue[idx2]=giatrimin;
            for(int j=idx2-1;j>=idx1+1;j--){
                if(a[j]<minvalue[j+1]) minvalue[j]=a[j];
                else{
                    minvalue[j]=minvalue[j+1];
                }
            }
            while(l<r){
                if(maxvalue[l]<=minvalue[l+1]){
                    cnt++;
                    ve.push_back(l);
                }
                l++;
            }   
            cout<<cnt<<"\n";
            if(cnt!=0) for(int x:ve) cout<<x+1<<" ";
        }
        cout<<"\n";
    }
    system("pause");
}
// 4 3
// 1 2 4 10
// 1 5 2 1 2
// 
