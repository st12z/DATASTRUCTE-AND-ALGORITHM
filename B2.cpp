#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
		int n,m;
		cin>>n;
        int a[n+1][n+1];
		int deg[n+1]={0};
		for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
		}
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(a[i][j]==1){
                    deg[i]++;
                }
            }
        }
        int check=0;
        for(int i=1;i<=n;i++){
            if(deg[i]%2==1){
                check=1;
                break;
            }
        }
        if(check==1){
            stack<int>st;
            st.push(1);
            vector<int>ve;
            while(!st.empty()){
                int top=st.top();
                st.pop();
                int ok=0;
                for(int i=1;i<=n;i++){
                    if(a[top][i]==1){
                        ok=1;
                        st.push(top);
                        st.push(i);
                        a[top][i]=0;
                        a[i][top]=0;
                        break;
                    }
                }
                if(ok==0){
                    ve.push_back(top);
                }
            }
            reverse(ve.begin(),ve.end());
            for(int x:ve) cout<<x<<" ";
        }
		cout<<"\n";
    }
    system("pause");
}