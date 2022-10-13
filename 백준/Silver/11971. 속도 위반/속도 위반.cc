#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,lm,sp,mx=0; cin>>n>>m;

    vector<int> lmv, spv; 

    for(int i=0;i<n;i++){
        cin>>lm>>sp;
        for(int j=0;j<lm;j++){
            lmv.push_back(sp);
        }
    }

    for(int i=0;i<m;i++){
        cin>>lm>>sp;
        for(int j=0;j<lm;j++){
            spv.push_back(sp);
        }
    }

    for(int i=0;i<100;i++){
        mx = max(mx, spv[i] - lmv[i]);
    }
    cout<<mx;

    return 0;
}
