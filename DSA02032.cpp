#include <bits/stdc++.h>
using namespace std;
int X;
int n;
int x[21];
int visited[11];
int a[21];
int check;
vector<vector<int>>ve;
void khoitao(){
    cin>>n>>X;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
}
void out(int j){
    vector<int>v;
    for(int i=1;i<=j;i++){ 
        v.push_back(x[i]);
    }
    ve.push_back(v);
}
void Try(int i,int sum,int cur){
    for(int j=cur;j<=n;j++){
        if(sum+a[j]<=X){
            x[i]=a[j];
            if(sum+a[j]<X){
                Try(i+1,sum+a[j],j);
            }
            else{
                check=1;
                out(i);
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ve.clear();
        khoitao();
        check=0;
        Try(1,0,1);
        if(check==0){
            cout<<-1;
        }
        else{
            cout<<ve.size()<<" ";
            for(int i=0;i<ve.size();i++){
                cout<<'{';
                for(int j=0;j<ve[i].size();j++){
                    cout<<ve[i][j];
                    if(j!=ve[i].size()-1) cout<<" ";
                }
                cout<<"} ";
            }
        }
        cout<<"\n";
    }
    system("pause");
}

