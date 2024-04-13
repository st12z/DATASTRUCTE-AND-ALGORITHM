#include <bits/stdc++.h>
using namespace std;
int a[11][11];
int n;
string s="";
int check;
void Try(int x,int y){
    if(x==n && y==n){
        cout<<s<<" ";
        check=0;
        return;
    }
    if(x+1<=n && a[x+1][y]==1){
        s+="D";
        Try(x+1,y);
        s.erase(s.begin()+s.length()-1);
    }
    if(y+1<=n && a[x][y+1]){
        s+="R";
        Try(x,y+1);
        s.erase(s.begin()+s.length()-1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        check=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        if(a[1][1]==0) cout<<-1;
        else{
            Try(1,1);
            if(check==1) cout<<-1;
        }
        
        cout<<"\n";
    }
    system("pause");
}