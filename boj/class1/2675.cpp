#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    int loop,n;
    string s;
    cin>>loop;

    while(loop--){
        cin>>n>>s;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<n;j++){
                cout<<s[i];
            }
        }
        cout<<'\n';
    }
    return 0;
}   