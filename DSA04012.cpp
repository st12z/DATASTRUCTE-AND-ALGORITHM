#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[101][201]={0};
        int p[101];
        int q[101];
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>p[i];
        for(int j=0;j<m;j++) cin>>q[j];
        if(n>m){
            for(int i=0;i<m;i++){
                int pos=i;
                for(int j=0;j<n;j++){
                    int x=q[i]*p[j];
                    a[i][pos]=x;
                    pos++;
                }
            }
            for(int i=0;i<n+m-1;i++){
                int x=0;
                for(int j=0;j<m;j++){
                    x+=a[j][i];
                }
                cout<<x<<" ";
            }
        }
        else{
            for(int i=0;i<n;i++){
                int pos=i;
                for(int j=0;j<m;j++){
                    int x=p[i]*q[j];
                    a[i][pos]=x;
                    pos++;
                }
            }
            for(int i=0;i<n+m-1;i++){
                int x=0;
                for(int j=0;j<n;j++){
                    x+=a[j][i];
                }
                cout<<x<<" ";
            }            
        }
        cout<<"\n";
    }
    system("pause");
}
// 0 1 1 2 3 5 8 13 21 34 