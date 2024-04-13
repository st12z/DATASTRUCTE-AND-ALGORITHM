#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=1000000007;
int convert(string s){
    int sum=0;
    for(int i=0;i<s.length();i++){
        sum=sum*10+s[i]-'0';
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        cin.ignore();
        string s;
        getline(cin,s);
        queue<int>q;
        for(int i=s.length()-1;i>=0;i--){
            string temp="";
            if(isdigit(s[i])){
                while(isdigit(s[i])){
                    temp=s[i]+temp;
                    i--;
                }   
                q.push(convert(temp));
            }
            else if(s[i]!=' '){
                int x=q.front();
                q.pop();
                int y=q.front();
                q.pop();
                if(s[i]=='+') q.push(x+y);
                else if(s[i]=='-') q.push(y-x);
                else if(s[i]=='*') q.push(y*x);
                else q.push(y/x);
            }
        }
        cout<<q.front();
    }
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
//axxxy
//axxxy
