#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int in;
    map<int, int> x, y;
    for(int i=0;i<3;i++){
        cin>>in;
        x[in] += 1;

        cin>>in;
        y[in] += 1;   
    }

    for(auto a : x)
        if(a.second == 1) cout<<a.first<<' ';

    for(auto a : y)
        if(a.second == 1) cout<<a.first;

    return 0;
}