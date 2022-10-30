#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m; cin>>n>>m;
    long long sum=0, ans=0;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(i>=m){
            sum -= a[i-m];
        }
        sum+=a[i];
        ans = max(ans, sum);
    }

    cout<<ans;


    return 0;
}
