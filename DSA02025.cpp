#include <bits/stdc++.h>
using namespace std;
vector<string>ve;
int x[11];
int minvalue=1e9;
int n;
int visited[11];
void khoitao(){
    cin>>n;
    ve.push_back("");
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        ve.push_back(s);
        visited[i]=0;
    }
}
void Try(int i,int count){
    for(int j=1;j<=n;j++){
        if(visited[j]==0){
            x[i]=j;
            visited[j]=1;
            int dem=0;
            if(i<n){
                if(i>=2){
                    int l=0;
                    int r=0;
                    while(l<=ve[x[i-1]].length()-1 && r<=ve[x[i]].length()-1){
                        if(ve[x[i-1]][l]==ve[x[i]][r]){
                            dem++;
                            l++;
                            r++;
                        }
                        else if(ve[x[i-1]][l]<ve[x[i]][r]) l++;
                        else{
                            r++;
                        }
                    }
                }
                Try(i+1,count+dem);
            }
            else{
                int l=0;
                int r=0;
                while(l<=ve[x[i-1]].length()-1 && r<=ve[x[i]].length()-1){
                    if(ve[x[i-1]][l]==ve[x[i]][r]){
                        dem++;
                        l++;
                        r++;
                    }
                    else if(ve[x[i-1]][l]<ve[x[i]][r]) l++;
                    else{
                        r++;
                    }
                }   
                if(count+dem<minvalue) minvalue=count+dem;             
            }
            visited[j]=0;
        }
    }
}
int main(){
    khoitao();
    Try(1,0);
    cout<<minvalue<<"\n";
    system("pause");
}

