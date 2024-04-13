#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct data{
    int x,y,z,s;
};
int main(){
    int t;
    cin>>t;
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
    while(t--){
        int a,b,h;
        cin>>h>>a>>b;
        char c[h+1][a+1][b+1];
        int m,n,p;
        queue<struct data>q;
        struct data u;      
        for(int i=1;i<=h;i++){
            cin.ignore();
            for(int j=1;j<=a;j++){
                for(int k=1;k<=b;k++){
                    cin>>c[i][j][k];
                    if(c[i][j][k]=='S'){
                        u.x=i;
                        u.y=j;
                        u.z=k;
                        u.s=0;
                        c[i][j][k]='#';
                        q.push(u);
                    }
                }
            }
        }
        int check=0;
        while(!q.empty()){
            struct data top=q.front();
            q.pop();
            int x=top.x,y=top.y,z=top.z,s=top.s;
            if(c[x][y][z]=='E'){
                cout<<s;
                check=1;
                break;
            }
            for(int i=0;i<6;i++){
                int xt=x+dx[i];
                int yt=y+dy[i];
                int zt=z+dz[i];
                if(xt>=1 && xt<=h && yt>=1 && yt<=a && zt>=1 && zt<=b && c[xt][yt][zt]!='#'){
                    u.x=xt;
                    u.y=yt;
                    u.z=zt;
                    u.s=s+1;
                    q.push(u);
                    c[xt][yt][zt]='#';
                }
            }
        }
        cout<<"\n";
    }
    system("pause");
}
