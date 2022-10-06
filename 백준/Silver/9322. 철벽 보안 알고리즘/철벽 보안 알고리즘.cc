#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int T,n; cin>>T;
    while(T--){
        cin>>n;
        string in;
        map<string, int> m;
        map<int,string> ans;
        vector<int> pos(n);
        
        for(int i=0;i<n;i++){
            cin>>in;
            m.insert({in,i});
        }

        for(int i=0;i<n;i++){
            cin>>in;
            pos[i] = (m.find(in)->second);
        }  
        
        for(int i=0;i<n;i++){
            cin>>in;
            ans.insert({pos[i], in});
        }
        for(auto a : ans){
            cout<<a.second<<' ';
        }
        cout<<'\n';
    }

    return 0;

}

