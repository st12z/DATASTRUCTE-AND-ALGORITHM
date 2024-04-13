#include <bits/stdc++.h>
using namespace std;
int a[9][9];
int cot[9];
int cheo1[30];
int cheo2[30];
int cheo3[30];
int maxvalue=-1e9;
int n=8;
int x[9];
int Xopt[9];
void khoitao(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
    for(int i=0;i<=29;i++){
        cheo1[i]=cheo2[i]=cheo3[i]=0;
    }
    for(int i=1;i<=8;i++) cot[i]=0;
}
void Try(int i,int sum){
    for(int j=1;j<=8;j++){
        if(cot[j]==0 && cheo1[i+j]==0 ){
            if(j>=i && cheo2[j-i]==0){
                x[i]=a[i][j];
                cot[j]=1;
                cheo1[i+j]=1;
                cheo2[j-i]=1;
                if(i<n) Try(i+1,sum+a[i][j]);
                else{
                    if(sum+a[i][j]>maxvalue){
                        maxvalue=sum+a[i][j];
                    }
                    
                }
                cot[j]=0;
                cheo1[i+j]=0;
                cheo2[j-i]=0;
            }
            if(i>j && cheo3[i-j]==0){
                x[i]=a[i][j];
                cot[j]=1;
                cheo1[i+j]=1;
                cheo3[i-j]=1;
                if(i<n) Try(i+1,sum+a[i][j]);
                else{
                    if(sum+a[i][j]>maxvalue){
                        maxvalue=sum+a[i][j];
                    }
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
    while(t--){maxvalue=-1;
        khoitao();
        Try(1,0);
        
        cout<<maxvalue<<"\n";
    }
    system("pause");
}

