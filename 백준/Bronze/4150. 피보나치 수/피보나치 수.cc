#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

string str_sum(string s1, string s2){
    string result;
    int i=s1.size()-1, j=s2.size()-1, r=0;

    while(i >=0 && j>=0){
        int sum = (s1[i--]-'0') + (s2[j--]-'0')+r;
        result = to_string(sum%10) + result;
        r = sum/10;
    }

    if(i<0){
        for(int k=j;k>=0;k--){
            int sum = (s2[k]-'0')+r;
            result = to_string(sum%10) + result;
            r = sum/10;
        }
    }
    if(r==1)
        result= "1"+result;

    return result;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    vector<string> dp;
    dp.push_back("0");
    dp.push_back("1");
    dp.push_back("1");

    for(int i=3;i<=n;i++){
        dp.push_back (str_sum(dp[i-2], dp[i-1]));
    }

    cout<<dp[n];

    
    return 0;
}