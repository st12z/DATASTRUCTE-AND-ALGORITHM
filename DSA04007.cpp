#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;int k;
        cin>>k>>a>>b;
        int result[50];
        if(a.length()>b.length()) swap(a,b); 
        while(a.length()<b.length()){
            a="0"+a;
        }
        int nho=0;
        for(int i=a.length()-1;i>=0;i--){
            int temp=a[i]-'0'+b[i]-'0'+nho;
            if(temp>=k){
                result[i]=temp-k;
                nho=1;
            }
            else{
                result[i]=temp;
                nho=0;
            }
        }
        if(nho!=0){
            cout<<nho;
        }
        for(int i=0;i<=a.length()-1;i++) cout<<result[i];
        cout<<"\n";
    }
    system("pause");
}
// 2 7 3 6
//