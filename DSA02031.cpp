#include <bits/stdc++.h>
using namespace std;
int k;
char x[39];
char c;
int cnt=0;
int visited[100];
void khoitao(){
    cin>>c;
    for(int i=65;i<=99;i++) visited[i]=0;
    k=c-'A'+1;
}
bool check(){
    int idx1=-1,idx2=-1;
    for(int i=1;i<=k;i++){
        if(x[i]=='A') idx1=i;
        if(x[i]=='E') idx2=i;
    }
    if(idx1==-1 && idx2==-1) return 1;
    if(idx1-idx2==1 &&(idx1!=-1 && idx2!=-1)) return 1;
    if(idx2-idx1==1  &&(idx1!=-1 &&idx2!=-1)) return 1;
    if(idx1>1 && idx1<k) return 0;
    if(idx2>1 && idx2<k) return 0;
    return 1;
}
void out(){
    if(check()){ for(int i=1;i<=k;i++) cout<<x[i];cout<<"\n";cnt++;}
    
}
void Try(int i){
    for(char j='A';j<=c;j++){
        if(visited[j]==0){
            x[i]=j;
            visited[j]=1;
            if(i<k) Try(i+1);
            else{
                out();
            }
            visited[j]=0;
        }   
    }
}
int main(){
    khoitao();
    Try(1);
    cout<<cnt;
    system("pause");
}
// ABCDE
// ABDCE
// ACBDE
// ACDBE
// ADBCE
// ADCBE
// AEBCD
// AEBDC
// AECBD
// AECDB
// AEDBC
// AEDCB
// BAECD
// BAEDC
// BCAED
// BCDAE
// BCDEA
// BCEAD
// BDAEC
// BDCAE
// BDCEA
// BDEAC
// BEACD
// BEADC
// CAEBD
// CAEDB
// CBAED
// CBDAE
// CBDEA
// CBEAD
// CDAEB
// CDBAE
// CDBEA
// CDEAB
// CEABD
// CEADB
// DAEBC
// DAECB
// DBAEC
// DBCAE
// DBCEA
// DBEAC
// DCAEB
// DCBAE
// DCBEA
// DCEAB
// DEABC
// DEACB
// EABCD
// EABDC
// EACBD
// EACDB
// EADBC
// EADCB
// EBCDA
// EBDCA
// ECBDA
// ECDBA
// EDBCA
// EDCBA

