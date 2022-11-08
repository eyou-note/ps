#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);   
    
    int t,n; cin>>t;
    long long dp[101]={0,};   

    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = 2;

    for(int i=5;i<=100;i++){
        dp[i] = dp[i-5] + dp[i-1];
    }
    while(t--){
        cin>>n;
        cout<<dp[n]<<endl;
    }

    return 0;
}