#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,d;
        cin>>s>>d;
        int a[d+1];
        int k=9;
        int check=1;
        for(int i=d;i>=1;i--){
            if(i==1){
                if(s<=9) a[i]=s;
                else{
                    check=0;
                }
                break;
            }
            while(k>=s){
                k--;
            }
            a[i]=k;
            s-=k;
        }
        if(check==0){
            cout<<-1;
        }
        else{
            for(int i=1;i<=d;i++) cout<<a[i];
        }
        
        cout<<"\n";
    }
    system("pause");
}