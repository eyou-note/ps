#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   
    int n,m; cin>>n>>m;
    string url, password;
    unordered_map<string, string> um;
    for(int i=0;i<n;i++){
        cin>>url>>password;
        um[url] = password;
    }

    for(int i=0;i<m;i++){
        cin>>url;
        cout<<um.find(url)->second<<'\n';
    }

    return 0;
    
}
