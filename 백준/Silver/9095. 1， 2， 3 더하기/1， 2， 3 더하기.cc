#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,n; cin>>t;
    int dp[12]={0,};
    dp[1] = 1, dp[2] = 2,dp[3] = 4;
    for(int i=4;i<=11;i++){
        dp[i] = dp[i-3]+dp[i-2]+dp[i-1];
    }

    while(t--){
        cin>>n;
        cout<<dp[n]<<'\n';    
    }

    return 0;
}
