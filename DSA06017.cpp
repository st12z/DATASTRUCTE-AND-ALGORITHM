#include <bits/stdc++.h>
#define ll long long
using namespace std;
int partition(int a[],int l,int r){
    int key=a[l];
    int i=l+1;
    int j=r;
    while(i<=j){
        while(i<=j && a[i]<=key) i++;
        while(i<=j && a[j]>=key) j--;
        if(i<j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        if(i>j) break;
    }
    swap(a[l],a[j]);
    return j;
}
void quicksort(int a[],int l,int r){
    if(l<r){
        int mid=partition(a,l,r);
        quicksort(a,l,mid);
        quicksort(a,mid+1,r);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int &x:a) cin>>x;
        for(int &x:b) cin>>x;

        int i=0;
        int j=0;
        vector<int>ve;
        ve.resize(n+m);
        ve.clear();
        while(i<=n-1 && j<=m-1){
            if(a[i]<b[j]){
                ve.push_back(a[i]);
                i++;
            }
            else{
                ve.push_back(b[j]);
                j++;
            }
        }
        while(i<=n-1){
            ve.push_back(a[i]);
            i++;
        }
        while(j<=m-1){
            ve.push_back(b[j]);
            j++;
        }
        for(int i=0;i<ve.size();i++) cout<<ve[i]<<" ";
        cout<<"\n";
    }
    system("pause");
}
// 1 5 2 1 2
// 
