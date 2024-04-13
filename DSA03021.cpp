#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool cmp(pair<int,int>a,pair<int,int>b){
    if(a.second<b.second) return 1;
    if(a.second==b.second){
        if(a.first<b.first) return 1;
    }
    return 0;
}
int main(){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        sort(a,a+n);
        int sum=0;
        int b,k,c;
        int e;
        int d=-1;
        for(int i=1;i<=a[0];i++){
            b=a[0]/i;// 6
            for(int k=2;k<=n-1;k++){
                if(a[k-1]/)
            }
        }
    system("pause");
}
// 6 16 18 22 27
// 2 5  5  6  7
// [6/a]=[16/2a+k]
// a
// b=16/([16/6]*a
// a=1 6
// b=16/