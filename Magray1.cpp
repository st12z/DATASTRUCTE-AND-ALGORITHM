#include <bits/stdc++.h>
using namespace std;
vector<string>s[11];
void khoitao(){
    s[2].push_back("00");
    s[2].push_back("01");
    s[2].push_back("11");
    s[2].push_back("10");
}
void xnp(){
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
}
int main(){
    int t;
    cin>>t;
    khoitao();
    xnp();
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<(int)pow(2,n);i++){
            cout<<s[n][i]<<" ";
        }
        cout<<"\n";
    }
    system("pause");
}

