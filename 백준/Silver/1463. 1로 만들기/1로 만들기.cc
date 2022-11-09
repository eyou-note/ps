#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,cnt,dp[1000001]={0,};
    cin>>n;

    dp[2]=1, dp[3]=1;
    for(int i=4;i<=n;i++){
        dp[i] = dp[i-1]+1;
        if(i%2==0) dp[i] = min(dp[i/2]+1, dp[i]);
        if(i%3==0) dp[i] = min(dp[i/3]+1, dp[i]);
    }
    cout<<dp[n];

    return 0;
}