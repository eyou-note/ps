#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,a,b,round=0; cin>>n>>a>>b;

    while(a!=b){
        a -= (a/2);
        b -= (b/2);
        round+=1;
    }

    cout<<round;

    return 0;
}
