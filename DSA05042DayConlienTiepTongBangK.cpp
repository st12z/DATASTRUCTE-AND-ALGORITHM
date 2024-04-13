#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        int f[n+1];
        f[0]=0;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++){
            f[i]=f[i-1]+a[i];
        }
        int check=0;
        for(int i=1;i<=n;i++){
            int l=i;
            int r=n;
            while(l<=r){
                int mid=(l+r)/2;
                if(f[mid]-f[i-1]==k){
                    check=1;
                    break;
                }
                else if(f[mid]-f[i-1]<k){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
        }
        if(check==1) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
	}
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
