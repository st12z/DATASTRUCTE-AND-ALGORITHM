#include <bits/stdc++.h>
using namespace std;
void show(stack<int>st){
    if(st.empty()==1){
        cout<<"empty";
        cout<<"\n";
        return;
    }
    vector<int>ve;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<"\n";
}
int main(){
    int N;
    cin>>N;
    vector<int>ve;
    for(int i=1;i<=N;i++){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int X;
            cin>>X;
            ve.push_back(X);
        }
        if(s=="POP"){
            if(ve.size()!=0) ve.erase(ve.begin()+ve.size()-1);
        }
        if(s=="PRINT"){
            if(ve.size()==0) cout<<"NONE";
            else{
                cout<<*ve.rbegin();
            }
            cout<<"\n";
        }
    }
    system("pause");
}
// 213222444
// 443222412
// 
// 444222321

