#include <bits/stdc++.h>
using namespace std;
int check;
int a[6];
void init(){
    for(int i=1;i<=5;i++){
        cin>>a[i];
    }
    sort(a+1,a+6);
}
void equal(int i,int result){
    if(check==1) return;
    if(result==23 && i==5){
        check=1;
        return;
    }
    if(i+1<=5) equal(i+1,result+a[i+1]);
    if(i+1<=5) equal(i+1,result-a[i+1]);
    if(i+1<=5) equal(i+1,result*a[i+1]);
}
void sinh(){
    while(check==0){
        equal(1,a[1]);
        int i=4;
        while(a[i]>=a[i+1] && i>=1) i--;
        if(i==0) return;
        int k=5;
        while(a[k]<=a[i]) k--;
        swap(a[k],a[i]);
        int l=i+1;
        int r=5;
        while(l<r){
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        check=0;
        init();
        sinh();
        if(check==1) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321