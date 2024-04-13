#include <bits/stdc++.h>
using namespace std;
int check;
int k,n,m;
char a[5][5];
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
map<string,int>mp;
int visited[5][5];
vector<string>result;
void init(){
	mp.clear();
	result.clear();
    cin>>k>>m>>n;
    for(int i=0;i<k;i++){
        string s;
        cin>>s;
        mp[s]=1;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
}
void Try(int x,int y,string s){
    if(mp[s]==1){
        result.push_back(s);
        check=1;
    }
    for(int i=0;i<8;i++){
        int x1=x+dx[i];
        int y1=y+dy[i];
        if(x1<=m && y1<=n && x1>=1 && y1>=1 && visited[x1][y1]==0){
            visited[x1][y1]=1;
            Try(x1,y1,s+a[x1][y1]);
            visited[x1][y1]=0;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        check=0;
        init();
        string s="";
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                for(int k=1;k<=4;k++){
                    memset(visited[k],0,sizeof(visited[k]));
                }
                visited[i][j]=1;
                Try(i,j,s+a[i][j]);
            }
        }
        if(check==0) cout<<-1;
        else{
        	
    		for(string s:result) cout<<s<<" ";
    	}
        cout<<"\n";
    }
}
// 213222444
// 443222412
// 1 6 7 2 5 8
// 444222321