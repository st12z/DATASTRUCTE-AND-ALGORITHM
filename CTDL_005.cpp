#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x:a) cin>>x;
    int key;
    cin>>key;
    for(int x:a){
        if(x!=key) cout<<x<<" ";
    }
    system("pause");
}

