#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, cnt=1;
    cin>>n;

    while(n>=cnt){
        n-=cnt;
        cnt+=1;
    }

    if(cnt%2==0) cout<<0;
    else cout<<cnt-n;

    return 0;
}     