#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,mix; cin>>n>>m;
    vector<int> package(m), each(m);
    for(int i=0;i<m;i++){
        cin>>package[i]>>each[i];
    }

    sort(package.begin(), package.end());
    sort(each.begin(), each.end());

    cout<<min( {(n/6)*package[0] + (n%6)*each[0], n*each[0], (int)ceil((double)n/6)*package[0] } );


    return 0;
}
