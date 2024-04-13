#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<int>v;
int visited[7]={};
void Try(int n){
    v.push_back(n);
    for(int i=0;i<=5;i++){
        if(visited[i]==0){
            visited[i]=1;
            Try(n*10+i);
            visited[i]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=5;i++){
        visited[i]=1;
        Try(i);
        visited[i]=0;
    }
    v.push_back(0);
    sort(v.begin(),v.end());
    while(t--){
        int l,r;
        cin>>l>>r;
        int x=lower_bound(v.begin(),v.end(),l)-v.begin();
        int y=lower_bound(v.begin(),v.end(),r)-v.begin();
        if(v[y]>r) y--;
        cout<<y-x+1;
        cout<<"\n";
    }
    system("pause");
}
// a-(b+c)
