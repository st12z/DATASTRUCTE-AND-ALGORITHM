#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(k==0) break;
            int max=i;
            int j=s.length()-1;
            while(j>i){
                if(s[j]>s[max]){
                    max=j;
                }
                j--;
            }
            if(max!=i){
                swap(s[i],s[max]);
                k--;
            }
        }
        cout<<s;
        cout<<"\n";
    }
    system("pause");
}
// 213222444
// 443222412
// 
// 444222321

