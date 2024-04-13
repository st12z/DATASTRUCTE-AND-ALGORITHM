#include <bits/stdc++.h>
using namespace std;
int main(){
 
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        int length[n]={0};
        for(int i=0;i<n;i++) length[i]=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j] && length[i]<=length[j]+1){
                    length[i]=length[j]+1;
                }
            }
        }
        cout<<*max_element(length,length+n);
        cout<<"\n";
    
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321

