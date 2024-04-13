#include <bits/stdc++.h>
using namespace std;
char a[11];
int visited[11];
int length;
string s;
void out(){
    for(int i=1;i<=length;i++) cout<<a[i];
    cout<<" ";
}
void Try(int m){    
    for(int i=1;i<=length;i++){
        if(visited[i]==0){
            a[m]=s[i-1];
            visited[i]=1;
            if(m<length) Try(m+1);
            else{
                out();
            }
            visited[i]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        sort(s.begin(),s.end());
        memset(visited,0,sizeof(visited));
        length=s.length();
        Try(1);
        cout<<"\n";
    }
    system("pause");
}