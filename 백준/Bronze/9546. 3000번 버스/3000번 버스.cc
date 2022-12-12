#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,k; cin>>t; 
    int dp[31] = {0,};

    dp[1] = 1;
    
    for(int i=2;i<=30;i++){
        dp[i] = dp[i-1]*2 + 1;
    }


    while(t--){
        cin>>k;
        cout<<dp[k]<<endl;
    }

    return 0;
}     