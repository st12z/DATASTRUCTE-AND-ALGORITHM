#include <bits/stdc++.h>
using namespace std;
int n;
int x[11];
int visited[11];
void khoitao(){
    cin>>n;
    for(int i=1;i<=9;i++) visited[i]=0;
}
bool check(){
    for(int i=2;i<=n;i++){
        if(abs(x[i]-x[i-1])==1) return 0;
    }
    return 1;
}
void out(){
    if(check()){ for(int i=1;i<=n;i++) cout<<x[i];cout<<"\n";}
    
}
void Try(int i){
    for(char j=1;j<=n;j++){
        if(visited[j]==0){
            x[i]=j;
            visited[j]=1;
            if(i<n) Try(i+1);
            else{
                out();
            }
            visited[j]=0;
        }   
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        Try(1);
        cout<<"\n";
    }
    system("pause");
}

