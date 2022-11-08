#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    vector<int> a(n+1,0), s(n+1,0);
    for (int i=1; i<=n; i++) {
        cin>>a[i];
    }
    s[1] = a[1];
    s[2] = a[1]+a[2];
    s[3] = max(a[1]+a[3], a[2]+a[3]);

    for(int i=4;i<=n;i++){
        s[i] = max(s[i-3] + a[i-1] + a[i], s[i-2] + a[i]);
    }

    cout<<s[n];

    return 0;
}
