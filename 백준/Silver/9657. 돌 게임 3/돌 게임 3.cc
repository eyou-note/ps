#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    vector<bool> dp(n+1, false);

    dp[1] = true;
    dp[2] = false;
    dp[3] = true;
    dp[4] = true;
    for(int i=5;i<=n;i++){
        if(!dp[i-1]) dp[i] = true;
        if(!dp[i-3]) dp[i] = true;
        if(!dp[i-4]) dp[i] = true;
    }

    cout<<(dp[n]?"SK":"CY");

    return 0;
}