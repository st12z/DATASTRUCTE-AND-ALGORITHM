#include <bits/stdc++.h>
using namespace std;
int X;
bool cmp(int a,int b){
    return abs(X-a)<abs(X-b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n>>X;
        int a[n];
        for(int &x:a) cin>>x;
        for(int i=0;i<n;i++){
            int check=1;
            for(int j=0;j<n-i-1;j++){
                if(abs(a[j]-X)>abs(a[j+1]-X)){
                    check=0;
                    swap(a[j],a[j+1]);
                }
            }
            if(check==1) break;
        }
        for(int x:a) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}

