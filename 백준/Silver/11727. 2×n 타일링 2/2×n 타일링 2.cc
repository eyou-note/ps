#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n,MOD = 10007;
    int dp[1001]={0,};
    cin>>n;

    dp[1] = 1, dp[2]=3;
    for(int i=3;i<=n;i++){
        dp[i] = (dp[i-1] + 2*dp[i-2]) % MOD;
    }

    cout<<dp[n];


    return 0;
}