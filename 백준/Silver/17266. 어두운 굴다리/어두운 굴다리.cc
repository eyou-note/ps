#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m,ans; cin>>n>>m;
    vector<int> a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    ans = max(a[0]-0, n-a[m-1]);

    for(int i=1;i<m;i++){
        int dist = ceil((double)(a[i]-a[i-1])/2);
        ans = max(ans,dist);
    }

    cout<<ans;
    
    return 0;
    
}
