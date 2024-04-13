#include <bits/stdc++.h>
using namespace std;
struct data{
    int fi,se,pos;
};
int cmp(struct data a,struct data b){
    if(a.fi<b.fi) return 1;
    if(a.fi==b.fi) return a.se<b.se;
    return 0;
}
int main(){
    int n;
    cin>>n;
    struct data a[n];
    for(int i=0;i<n;i++){
        cin>>a[i].fi>>a[i].se;
        a[i].pos=i;
    }
    sort(a,a+n,cmp);
    int x=a[0].fi;
    int y=a[0].se;
    int posi=a[0].pos;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i].se>y && a[i].pos>posi && a[i].fi!=x){
            cnt++;
            x=a[i].fi;
            y=a[i].se;
            posi=a[i].pos;
        }
    }
    cout<<cnt;
    system("pause");
}

