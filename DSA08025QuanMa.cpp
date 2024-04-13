#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    map<char,int>mp;
    for(int i=97;i<=104;i++){
        mp[i]=i-96;
    }
    int dx[] = {1, 2, -1, 2, 1, -2, -1, -2};
    int dy[] = {2, 1, 2, -1, -2, 1, -2, -1};
    
    while(t--){
        int visited[9][9]={};
        string s1,s2;
        cin>>s1>>s2;
        int x,y,u,v;
        x=mp[s1[0]];
        y=s1[1]-'0';
        u=mp[s2[0]];
        v=s2[1]-'0';
        queue<pair<int,int>>q;
        q.push({x,y});
        while(!q.empty()){
            auto top=q.front();
            q.pop();
            if(top.first==u && top.second==v){
                cout<<visited[u][v];
                break;
            }
            for(int i=0;i<=7;i++){
                int x=top.first+dx[i];
                int y=top.second+dy[i];
                if(visited[x][y]==0 && x>=1 && x<=8 && y>=1 && y<=8){
                    q.push({x,y});
                    visited[x][y]=visited[top.first][top.second]+1;
                }
            }
        }
        cout<<"\n";
    }
    system("pause");
}
// a-(b+c)
