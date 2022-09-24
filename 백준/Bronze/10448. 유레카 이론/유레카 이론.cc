#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int dp[1001];

bool is_triangular_number(int n){
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            for(int k=1;k<=n;k++) {
                if(dp[i] + dp[j]+ dp[k] == n){
                   return true;
                }
            }
        }
    }
    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t,n; cin>>t;

    for(int i=1;i<=1000;i++){
        dp[i] = i*(i+1)/2;
    } 

    while(t--){
        cin>>n;

        if(is_triangular_number(n)) 
            cout<<1<<'\n';
        else 
            cout<<0<<'\n';
    }

    return 0;
}