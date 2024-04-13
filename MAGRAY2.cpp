#include <bits/stdc++.h>
using namespace std;
char x[13];
vector<string>s[11];
string word;
int n;
int idx,cnt;
void khoitaogray(){
    s[2].push_back("00");
    s[2].push_back("01");
    s[2].push_back("11");
    s[2].push_back("10");
}
void khoitaonp(){
    n=word.length();
    for(int i=0;i<=word.length()-1;i++) x[i]='0';
}
void gray(){
    for(int i=3;i<=10;i++){
        int cnt=0;
        for(int j=0;j<=(int)pow(2,i)-(int)pow(2,i-1)-1;j++){
            string word="0"+s[i-1][cnt++];
            s[i].push_back(word);
        }
        cnt=(int)pow(2,i-1)-1;
        for(int j=(int)pow(2,i)-(int)pow(2,i-1);j<=(int)pow(2,i)-1;j++){
            string word="1"+s[i-1][cnt--];
            s[i].push_back(word);
        }
    }
    for(int i=0;i<(int)pow(2,n);i++){
        if(s[n][i]==word){
            idx=i;
            break;
        }
    }
}
void xnp(){
    int cnt=0;
    while(1){
        if(cnt==idx){
            string tu="";
            for(int i=0;i<n;i++){
                tu+=x[i];
            }
            cout<<tu;
            return;
        }
        int i=n-1;
        while(x[i]=='1' && i>=0){
            x[i]='0';
            i--;
        }
        if(i==-1) return;
        x[i]='1';
        cnt++;
    }
}
int main(){
    int t;
    cin>>t;
    khoitaogray();
    while(t--){
        cnt=0;
        cin>>word;
        khoitaonp();
        gray();
        xnp();
        cout<<"\n";
    }
    system("pause");
}