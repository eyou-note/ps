#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int h,y; cin>>h>>y;
    int dp[11]={0,};
    dp[0]=h;

    for(int i=1;i<=y;i++){
        dp[i] = dp[i-1]*1.05; 
        if(i>=3){
            dp[i] = max((int)dp[i], (int)(dp[i-3]*1.2));
        }
        if(i>=5){
            dp[i] = max((int)dp[i], (int)(dp[i-5]*1.35));
        }
    }

    cout<<dp[y];
    
    
    return 0;

}

