#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<int>q;
        q.push(9);
        while(1){
            int top=q.front();
            q.pop();
            if(top%n==0){
                cout<<top;
                break;
            }
            q.push(top*10);
            q.push(top*10+9);
        }
        cout<<"\n";
    }
}