#include <bits/stdc++.h>
#define ll long long
using namespace std;
int prime[10001]={};
void sang(){
    for(int i=2;i<=10000;i++) prime[i]=1;
    for(int i=2;i<=sqrt(10000);i++){
        if(prime[i]){
        for(int j=i*i;j<=10000;j+=i){
                prime[j]=0;
        }
        }
    }
}
int main(){
    int t;
    cin>>t;
    sang();
    while(t--){
        queue<string>q;
        string u,v;
        int visited[10001]={};
        cin>>u>>v;
        q.push(u);
        visited[stoi(u)]=1;
        while(!q.empty()){
            string top=q.front();
            q.pop();
            if(top==v){
                cout<<visited[stoi(top)]-1;
                break;
            }
            string s=top;
            for(int i=0;i<=3;i++){
                s=top;
                for(int j=0;j<=9;j++){
                    if(i==0 &&j==0 ) continue;
                    s.replace(i,1,to_string(j));
                    if(visited[stoi(s)]==0 && prime[stoi(s)]){
                        q.push(s);
                        visited[stoi(s)]=visited[stoi(top)]+1;
                    }
                }
            }
        }
        cout<<"\n";
    }
}
// a-(b+c)
