#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,key;
        cin>>n>>key;
        int a[n];
        map<int,int>mp;
        for(int &x:a){
            cin>>x;
        }
        sort(a,a+n);
        int i=0;
        int ok=0;
        while(i<=n-3){
            int j=i+1;
            int k=n-1;
            while(j<=n-2 && k>=j+1){
                int temp=a[i]+a[j]+a[k];
                if(temp>key){
                    k--;
                }
                else if(temp<key){
                    j++;
                }
                else{
                    ok=1;
                    break;
                }
            }
            if(ok==1){
                break;
            }
            i++;
        }

        if(ok==1) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
// 
