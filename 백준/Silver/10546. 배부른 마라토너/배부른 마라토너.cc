#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

map<string,int> mp;
int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n; cin>>n;
    string in;
    
    for(int i=0;i<n;i++){
        cin>>in;
        if(mp.find(in)==mp.end()){
            mp.insert({in,1});
        }else{
            mp[in]+=1;
        }
    }
    for(int i=0;i<n-1;i++){
        cin>>in;
        mp[in]-=1;
    }

    for(auto m : mp){
        if(m.second!=0){
            cout<<m.first;
        }
    }




    return 0;
}
