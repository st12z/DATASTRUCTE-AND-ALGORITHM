#include <bits/stdc++.h>
using namespace std;
int cot[11];
int cheo1[30];
int cheo2[11];
int cheo3[11];
int cnt;
int n;
void khoitao(){
    for(int j=1;j<=11;j++) cot[j]=0;
    for(int j=1;j<=30;j++) cheo1[j]=0;
    for(int j=1;j<=11;j++) cheo2[j]=0;
    for(int j=1;j<=11;j++) cheo3[j]=0;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j]==0 && cheo1[i+j]==0){
            if(j>=i && cheo2[j-i]==0){
                cot[j]=1;
                cheo1[i+j]=1;
                cheo2[j-i]=1;
                if(i<n) Try(i+1);
                else{
                    cnt++;
                }
                cot[j]=0;
                cheo1[i+j]=0;
                cheo2[j-i]=0;
            }
            if(j-i<0 && cheo3[i-j]==0){
                cot[j]=1;
                cheo1[i+j]=1;
                cheo3[i-j]=1;
                if(i<n) Try(i+1);
                else{
                    cnt++;
                }
                cot[j]=0;
                cheo1[i+j]=0;
                cheo3[i-j]=0;  
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cnt=0;
        khoitao();
        Try(1);
        cout<<cnt;
        cout<<"\n";
    }
    system("pause");
}