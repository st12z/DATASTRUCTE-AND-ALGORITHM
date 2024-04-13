#include <bits/stdc++.h>
using namespace std;
int binary_search1(int a[],int l,int r,int x){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(x>a[mid]) return binary_search1(a,mid+1,r,x);
    else if(x<a[mid]) return binary_search1(a,l,mid-1,x);
    else{
        return mid;
    }
}
int binary_search2(int a[],int l,int r,int x){
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==x) return mid;
        else if(a[mid]>x) r=mid-1;
        else{
            l=mid+1;
        }
    }
    return -1;
}
int tkns(int a[],int l,int r,int x){
    while(l<=r && x>=a[l] && x<=a[r]){
        int mid=l+(x-a[l])*(r-l)/(a[r]-a[l]);
        if(x<a[mid]){
            r=mid-1;
        }
        else if(x>a[mid]){
            l=mid+1;
        }
        else return mid;
    }
    return -1;
}   
int main(){
    int n,x;
    int a[n];
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    if(tkns(a,0,n-1,x)!=-1){
        cout<<"vi tri "<<tkns(a,0,n-1,x);
    }
    else{
        cout<<"NO";
    }
    system("pause");
}