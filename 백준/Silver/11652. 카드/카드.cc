#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    map<long long, int> um;
    long long in,ans;
    int n,mx=0; cin>>n;
    for(int i=0;i<n;i++){
        cin>>in;

        if(um.find(in)==um.end()){
            um[in]=1;
        }else{
            um[in]+=1;
        }
    }

    for(auto m : um){
        if(m.second > mx){
            mx = max(mx, m.second);
            ans = m.first;
        }
    }

    cout<<ans;

    return 0;
}
