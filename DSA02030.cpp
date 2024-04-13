#include <bits/stdc++.h>
using namespace std;
int k;
char x[39];
char c;
int visited[100];
void khoitao(){
    cin>>c>>k;
    for(int i=65;i<=99;i++) visited[i]=0;
}
void out(){
    for(int i=1;i<=k;i++) cout<<x[i];
    cout<<"\n";
}
void Try(int i){
    for(char j='A';j<=c;j++){
        if(visited[(int)j]==0){
            x[i]=j;
            if(i<k) Try(i+1);
            else{
                out();
            }
        }   
    }
    visited[x[i-1]]=1;
    if(i>=2 && i<=k-1){
        for(int j=x[i-1]+1;j<=c;j++) visited[(int)j]=0;
    }
}
int main(){
    khoitao();
    Try(1);
    system("pause");
}
// D 4
// AAAA
// AAAB
// AAAC
// AAAD
// AABB
// AABC
// AABD
// AACC
// AACD
// AADD
// ABBB
// ABBC
// ABBD
// ABCC
// ABCD
// ABDD
// ACCC
// ACCD
// ACDD
// ADDD
// BBBB
// BBBC
// BBBD
// BBCC
// BBCD
// BBDD
// BCCC
// BCCD
// BCDD
// BDDD
// CCCC
// CCCD
// CCDD
// CDDD
// DDDD