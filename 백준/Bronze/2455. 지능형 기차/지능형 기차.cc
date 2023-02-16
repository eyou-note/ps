#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int mx = 0, sum = 0, in, out;

    for(int i=0;i<4;i++){
        cin>>out>>in;

        sum-=out;
        sum+=in;

        mx = max(sum, mx);

    }

    cout<<mx; 
    
    return 0;
}     