#include <bits/stdc++.h>
using namespace std;
#define ll long long
int maxday(int a[],int l,int mid,int r){
    int maxleft=-1e9;
    int maxright=-1e9;
    int sum=0;
    for(int i=mid;i>=l;i--){
        sum+=a[i];
        if(sum>maxleft) maxleft=sum;
    }
    sum=0;
    for(int i=mid+1;i<=r;i++){
        sum+=a[i];
        if(sum>maxright) maxright=sum;
    }
    return maxleft+maxright;
}
int maxsum(int a[],int l,int r){
    if(l==r) return a[l];
    int mid=(l+r)/2;
    return max(maxsum(a,l,mid),max(maxsum(a,mid+1,r),maxday(a,l,mid,r)));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        cout<<maxsum(a,0,n-1);
        cout<<"\n";
    }
    system("pause");
}
// 4 7 7 6 5