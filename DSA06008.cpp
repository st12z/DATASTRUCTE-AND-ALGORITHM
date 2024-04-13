#include <bits/stdc++.h>
#define ll long long
using namespace std;
int count(int x,int b[],int m,int d[]){
    if(x==0) return 0;
    if(x==1) return d[0];
    int pos=upper_bound(b,b+m,x)-b;
    int cnt=m-pos;
    cnt=cnt+d[0]+d[1];
    if(x==2){
        cnt=cnt-d[3]-d[4];
    }
    if(x==3){
        cnt=cnt+d[2];
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        int d[5]={0};
        for(int &x:a) cin>>x;
        for(int &x:b){
            cin>>x;
            if(x<=4) d[x]++;
        }
        sort(b,b+m);
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt=cnt+count(a[i],b,m,d);
        }
        cout<<cnt<<"\n";
    }
    system("pause");
}
// 2 7 3 6
//