#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    vector<int> dp(n+1,0);

    dp[1] = 1;
    for(int i=1;i<=n;i++){
        dp[i] = dp[i-1]+1;
        for(int j=2;j*j<=i;j++){
            dp[i] = min(dp[i], dp[i-(j*j)]+1);
        }
    }

    cout<<dp[n];
    

    return 0;
}