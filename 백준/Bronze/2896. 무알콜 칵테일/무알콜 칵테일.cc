#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;



int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    double a,b,c,i,j,k,mn;
    cin>>a>>b>>c>>i>>j>>k;

    mn= min({a/i, b/j, c/k});

    cout<<fixed;
    cout.precision(6);
    cout<<a-(i*mn)<<' '<<b-(j*mn)<<' '<<c-(k*mn);

    return 0;
}

