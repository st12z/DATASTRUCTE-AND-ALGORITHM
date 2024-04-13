#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        queue<int>q;
        int n;
        cin>>n;
        int visited[n+1]={0};
        q.push(n);
        visited[n]=1;
        int path[n+1]={0};
        while(!q.empty()){
            int top=q.front();
            q.pop();
            if(top==1){
                cout<<path[top];
                break;
            }
            if(top%2==0 && visited[top/2]==0){
                path[top/2]=path[top]+1;
                visited[top/2]=1;
                q.push(top/2);
            }
            if(top%3==0 && visited[top/3]==0){
                path[top/3]=path[top]+1;
                visited[top/3]=1;
                q.push(top/3);
            }
            if(top-1>0 && visited[top-1]==0){
                path[top-1]=path[top]+1;
                visited[top-1]=1;
                q.push(top-1);
            }
        }
        cout<<"\n";
    }
}