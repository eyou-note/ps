#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    vector<long long> ans;
    while(t--){
        long long n,res=0;
        cin>>n;
        while(n!=0){
            int r = n % 10;
            res = res * 10 + r;
            n/=10;
        }
        ans.push_back(res);
    }

    sort(ans.begin(), ans.end());

    for(auto a : ans){
        cout<<a<<'\n';
    }

    return 0;
}
