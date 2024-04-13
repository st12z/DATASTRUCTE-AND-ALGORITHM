#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        int  pos;
        cin>>n>>m>>pos;
        int a[n],b[m];
        pos-=1;
        for(int &x:a) cin>>x;
        for(int &y:b) cin>>y;
        int i=0;
        int j=0;
        int f=0;
        int check=0;
        while(i<=n-1 && j<=m-1){
            if(a[i]<b[j]){
                if(f==pos){
                    cout<<a[i];
                    check=1;
                    break;
                }
                i++;
                f++;
            }
            else if(a[i]>=b[j]){
                if(f==pos){
                    cout<<b[j];
                    check=1;
                    break;
                }
                j++;
                f++;
            }
        }
        while(i<=n-1){
            if(f==pos &&check==0){
                cout<<a[i];
                break;
            }
            i++;
            f++;
        }
        while(j<=m-1){
            if(f==pos &&check==0){
                cout<<b[j];
                break;
            }
            j++;
            f++;
        }
        cout<<"\n";       
    }
    system("pause");
}