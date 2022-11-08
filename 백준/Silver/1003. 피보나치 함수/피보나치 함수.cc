#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,n; cin>>t;
    pair<int,int> p[41];
    p[0] = {1,0}, p[1] = {0,1};
    for(int i=2;i<=40;i++){
        p[i] = {p[i-1].first + p[i-2].first, p[i-1].second + p[i-2].second};
    }

    while(t--){
        cin>>n;
        cout<<p[n].first<<' '<<p[n].second<<'\n';
    }

    return 0;
}
