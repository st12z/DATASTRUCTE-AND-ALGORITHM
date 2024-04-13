#include <bits/stdc++.h>
using namespace std;
int n;
int a[11][11];
int dx[]={1,0,0,-1};
int dy[]={0,1,-1,0};
int visited[11][11];
int check;
string s="";
void khoitao(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            visited[i][j]=0;
        }
    }
    visited[1][1]=1;
}
void out(){
    cout<<s<<" ";
}
void Try(int x,int y){
    if(x==n && y==n){
        out();
        check=1;
        return;
    }
    if(x+1<=n && a[x+1][y]==1 && visited[x+1][y]==0){
        visited[x+1][y]=1;
        s+="D";
        Try(x+1,y);
        s.erase(s.begin()+s.length()-1);
        visited[x+1][y]=0;
    }
    if(y-1>=1 && a[x][y-1]==1 && visited[x][y-1]==0){
        visited[x][y-1]=1;
        s+="L";
        Try(x,y-1);
        s.erase(s.begin()+s.length()-1);
        visited[x][y-1]=0;
    }
    if(y+1<=n && a[x][y+1]==1 && visited[x][y+1]==0){
        visited[x][y+1]=1;
        s+="R";
        Try(x,y+1);
        s.erase(s.begin()+s.length()-1);
        visited[x][y+1]=0;
    }

    if(x-1>=1 && a[x-1][y]==1 && visited[x-1][y]==0){
        visited[x-1][y]=1;
        s+="U";
        Try(x-1,y);
        s.erase(s.begin()+s.length()-1);
        visited[x-1][y]=0;
    }    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        khoitao();
        check=0;
        if(a[1][1]==0) cout<<-1; 
        else{
            Try(1,1);
            if(check==0) cout<<-1;}
        cout<<"\n";
    }
    system("pause");
}

