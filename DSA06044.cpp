#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
        int n,key;
        cin>>n;
        int a[n];
        for(int &x:a){
            cin>>x;
        }
        vector<int>ve1;
        vector<int>ve2;
        for(int i=0;i<n;i++){
            if(i%2==0) ve1.push_back(a[i]);
            else ve2.push_back(a[i]);
        }
        sort(ve1.begin(),ve1.end());
        sort(ve2.begin(),ve2.end(),greater<int>());
        int i=0;
        while(i<=ve2.size()-1){
            cout<<ve1[i]<<" "<<ve2[i]<<" ";
            i++;
        }
        while(i<=ve1.size()-1){
            cout<<ve1[i]<<" ";
            i++;
        }
        cout<<"\n";
    system("pause");
}
// 2 7 3 6
// 
