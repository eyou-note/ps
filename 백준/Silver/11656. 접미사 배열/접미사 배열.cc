#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    string s; cin>>s;
    vector<string> v;
    for(int i=0;i<s.size();i++){
        v.push_back(s.substr(i, s.size()));
    }

    sort(v.begin(),v.end());

    for(auto vv : v){
        cout<<vv<<'\n';
    }

    return 0;
}
