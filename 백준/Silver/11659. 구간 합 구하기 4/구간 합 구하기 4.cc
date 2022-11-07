#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m,i,j; cin>>n>>m;
    vector<int> a(n+1,0), s(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i] = s[i-1]+a[i];
    }

    while(m--){
        cin>>i>>j;
        cout<<s[j]-s[i-1]<<'\n';
    }

    return 0;
}
