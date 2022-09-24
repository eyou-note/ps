#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string result,s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, b; cin>>n>>b;
    while(n){
        int r = n % b;
        if(r>9){
            result = s[r-10] + result;
        }else{
            result = to_string(r) + result;
        }
        n /=b;
    }
    cout<<result;
    return 0;
}