#include <bits/stdc++.h>
using namespace std;
void merge(int a[],int l,int mid,int r){
    int *B=new int[r-l+1];
    int k=0;
    int cs1=l;
    int cs2=mid+1;
    while(cs1<=mid && cs2<=r){
        if(a[cs1]<a[cs2]){
            B[k++]=a[cs1];
            cs1++;
        }
        else{
            B[k++]=a[cs2];
            cs2++;
        }
    }
    while(cs1<=mid){
        B[k++]=a[cs1++];
    }
    while(cs2<=r-1){
        B[k++]=a[cs2++];
    }
    int j=l;
    for(int i=0;i<k;i++){
        a[j]=B[i];
        j++;
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x:a) cin>>x;
        mergesort(a,0,n-1);
        for(int x:a) cout<<x<<" ";
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
