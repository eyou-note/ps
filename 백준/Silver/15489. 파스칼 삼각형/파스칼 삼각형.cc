#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int dp[31][31];
int main(){
    fastio;
//    freopen("input.txt", "r", stdin); 

    int r,c,w,sum=0; 
    cin>>r>>c>>w;
    
    dp[1][1] = 1;
    for(int i=1;i<=30;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i)  dp[i][j] = 1;
            else dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }

    for(int i=0;i<w;i++){
        for(int j=0;j<=i;j++){
            sum+=dp[r+i][c+j];
        }
    }

    cout<<sum;
    
    return 0;

}
