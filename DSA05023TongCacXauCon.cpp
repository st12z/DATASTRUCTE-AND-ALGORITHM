#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        int f[s.length()]={};
        f[0]=s[0]-'0';
        for(int i=1;i<=s.length()-1;i++){
            int sum=s[i]-'0';
            int temp=s[i]-'0';
            for(int j=i-1;j>=0;j--){
                temp=(s[j]-'0')*pow(10,i-j)+temp;
                sum+=temp;
            }
            f[i]=f[i-1]+sum;
        }
        cout<<f[s.length()-1]<<"\n";
	}
    system("pause");
}
// 152
/// 81 58 30 30 30 30 30
// 81 139 111
// f[i,l]=f[i-1,l], f[i-1,l-a[i]]
