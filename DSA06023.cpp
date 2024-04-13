#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

        int n,key;
        cin>>n;
        int a[n];
        for(int &x:a){
            cin>>x;
        }
        
        for(int i=0;i<n;i++){
            int check=0;
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                    check=1;
                    swap(a[i],a[j]);
                }
            }
            if(check==1){cout<<"Buoc "<<i+1<<": ";
            for(int i=0;i<n;i++) cout<<a[i]<<" ";
            cout<<"\n";}
    }
    system("pause");
}
// 1 5 2 1 2
// 
