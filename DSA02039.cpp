#include <bits/stdc++.h>
using namespace std;
int k;
int n;
int x[11];
void khoitao(){
    cin>>n;
}
vector<string>ve;
void out(int k){
    string word="";
    for(int j=1;j<=k;j++){
        word+=x[j]+'0';
    }
    sort(word.begin(),word.end(),greater<char>());
    ve.push_back(word);
}
void Try(int i,int cur,int sum){
    for(int j=cur;j<=n;j++){
        if(sum+j<=n){
            x[i]=j;
            if(sum+j<n) Try(i+1,j,sum+j);
            else out(i);            
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();ve.clear();
        Try(1,1,0);
        cout<<ve.size()<<"\n";
        sort(ve.begin(),ve.end(),greater<string>());
        if(n!=10){
        for(int i=0;i<ve.size();i++){
            cout<<"(";
            for(int j=0;j<ve[i].size();j++){
                cout<<ve[i][j];
                if(j!=ve[i].size()-1) cout<<" ";
            }
            cout<<")";
            cout<<" ";
        }
        }
        else{
            cout<<"(10) ";
                    for(int i=1;i<ve.size();i++){
            cout<<"(";
            for(int j=0;j<ve[i].size();j++){
                cout<<ve[i][j];
                if(j!=ve[i].size()-1) cout<<" ";
            }
            cout<<")";
            cout<<" ";
        }
        }
        cout<<"\n";
    }
    system("pause");
}
// 10
// 1
// 1
// (1)
// 2
// 2
// (2) (1 1)
// 3
// 3
// (3) (2 1) (1 1 1)
// 4
// 5
// (4) (3 1) (2 2) (2 1 1) (1 1 1 1)
// 5
// 7
// (5) (4 1) (3 2) (3 1 1) (2 2 1) (2 1 1 1) (1 1 1 1 1)
// 6
// 11
// (6) (5 1) (4 2) (4 1 1) (3 3) (3 2 1) (3 1 1 1) (2 2 2) (2 2 1 1) (2 1 1 1 1) (1 1 1 1 1 1)
// 7
// 15
// (7) (6 1) (5 2) (5 1 1) (4 3) (4 2 1) (4 1 1 1) (3 3 1) (3 2 2) (3 2 1 1) (3 1 1 1 1) (2 2 2 1) (2 2 1 1 1) (2 1 1 1 1 1) (1 1 1 1 1 1 1)
// 8
// 22
// (8) (7 1) (6 2) (6 1 1) (5 3) (5 2 1) (5 1 1 1) (4 4) (4 3 1) (4 2 2) (4 2 1 1) (4 1 1 1 1) (3 3 2) (3 3 1 1) (3 2 2 1) (3 2 1 1 1) (3 1 1 1 1 1) (2 2 2 2) (2 2 2 1 1) (2 2 1 1 1 1) (2 1 1 1 1 1 1) (1 1 1 1 1 1 1 1)
// 9
// 30
// (9) (8 1) (7 2) (7 1 1) (6 3) (6 2 1) (6 1 1 1) (5 4) (5 3 1) (5 2 2) (5 2 1 1) (5 1 1 1 1) (4 4 1) (4 3 2) (4 3 1 1) (4 2 2 1) (4 2 1 1 1) (4 1 1 1 1 1) (3 3 3) (3 3 2 1) (3 3 1 1 1) (3 2 2 2) (3 2 2 1 1) (3 2 1 1 1 1) (3 1 1 1 1 1 1) (2 2 2 2 1) (2 2 2 1 1 1) (2 2 1 1 1 1 1) (2 1 1 1 1 1 1 1) (1 1 1 1 1 1 1 1 1)
// 10
// 42
// (10) (9 1) (8 2) (8 1 1) (7 3) (7 2 1) (7 1 1 1) (6 4) (6 3 1) (6 2 2) (6 2 1 1) (6 1 1 1 1) (5 5) (5 4 1) (5 3 2) (5 3 1 1) (5 2 2 1) (5 2 1 1 1) (5 1 1 1 1 1) (4 4 2) (4 4 1 1) (4 3 3) (4 3 2 1) (4 3 1 1 1) (4 2 2 2) (4 2 2 1 1) (4 2 1 1 1 1) (4 1 1 1 1 1 1) (3 3 3 1) (3 3 2 2) (3 3 2 1 1) (3 3 1 1 1 1) (3 2 2 2 1) (3 2 2 1 1 1) (3 2 1 1 1 1 1) (3 1 1 1 1 1 1 1) (2 2 2 2 2) (2 2 2 2 1 1) (2 2 2 1 1 1 1) (2 2 1 1 1 1 1 1) (2 1 1 1 1 1 1 1 1) (1 1 1 1 1 1 1 1 1 1)
