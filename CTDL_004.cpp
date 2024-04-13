#include <bits/stdc++.h>
using namespace std;
char a[16];
int n;
int k;
int cnt=0;
void khoitao(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        a[i]='A';
    }
}
int check(){
    int cnt=0;
    
    for(int i=1;i<=n;i++){
        int ok=1;
        for(int j=i;j<=i+k-1;j++){
            if(a[j]!='A'){
                ok=0;
                break;
            } 
        }
        if(ok==1){
            cnt++;
        }
    }
    return cnt==1;
}
vector<string>ve;
void sth(){
    while(1){
        if(check()){
            string word="";
            for(int i=1;i<=n;i++){
                word+=a[i];
            }
            ve.push_back(word);
            cnt++;
        }
        int i=n;        
        while(a[i]=='B' && i>=1){
            a[i]='A';
            i--;
        }
        if(i==0) return;
        a[i]='B';
    }
}
int main(){
    khoitao();
    sth();
    cout<<cnt<<"\n";
    for(string s:ve){
        cout<<s<<"\n";
    }
	system("pause");
}
