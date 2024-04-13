#include <bits/stdc++.h>
using namespace std;
int mod=123456780;// 12345678911
#define ll long long
char fiboword(int n,int k){
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k<=f[n-2]) return fiboword(n-2,f[n-2]);
    else return fiboword(n-1,k-f[n-2]);
}
int main(){
    ll fibo[92];
    fibo[1]=1;
    fibo[2]=1;
    
    system("pause");
}
// 2
// 3 2
// 3 8 
//  1, 2, 1, 3, 1, 2, 1,4,1, 2, 1, 3, 1, 2, 1,
// 1, 2, 1, 3, 1, 2, 1, 4,5,1, 2, 1, 3, 1, 2, 1, 4