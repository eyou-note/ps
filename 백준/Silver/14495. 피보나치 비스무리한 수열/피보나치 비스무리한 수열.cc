#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    
    int n; cin>>n;
    vector<long long> dp(n+1,0);

    dp[0] = dp[1] = dp[2] = 1;

    for(int i=3;i<n;i++){
        dp[i] = dp[i-1] + dp[i-3];
    }

    cout<<dp[n-1];


    return 0;
}
