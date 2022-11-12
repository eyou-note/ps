#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    string str;
    while(t--){
        cin>>str;
        char c[101][101];
        int n = sqrt(str.size()), pos = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                c[i][j] = str[pos++];
            }
        }

        for(int i=n-1;i>=0;i--){
            for(int j=0;j<n;j++){
                cout<<c[j][i];
            }
        }
        cout<<endl;
    }

    return 0;
}