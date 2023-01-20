#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t, n;
    int sum=0, dp[80001]={0,};
    cin>>t;
    for(int i=1;i<=80000;i++){
        if(i%3==0 || i%7==0){
            sum += i; 
        }
        dp[i] = sum;

    }

    while(t--){
        cin>>n;
        cout<<dp[n]<<endl;

    }

    return 0;
}     