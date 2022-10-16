#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
 //  freopen("input.txt", "r", stdin);

    int n,m,cnt=0; cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    
    int st=0, en=0, sum=0;
    while(st<=en && en<=n){
        if (sum >= m) {
            if (sum == m) cnt++;
            sum -= a[st++];
        } else {
            if (en == n) break;
            sum += a[en++];
        }
    }

    cout<<cnt;

    return 0;
}
