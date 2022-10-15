#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    
    int n,m; cin>>n>>m;
    string in;
    unordered_map<int, string> um1;  
    unordered_map<string, int> um2;  

    for(int i=1;i<=n;i++){
        cin>>in;
        um1.insert({i,in});
        um2.insert({in,i});
    }
    for(int i=0;i<m;i++){
        cin>>in;
        if(in[0]>='A'&&in[0]<='Z'){
            cout<<um2.find(in)->second<<'\n';
        }else{
            cout<<um1.find(stoi(in))->second<<'\n';
        }
    }




    return 0;
}
