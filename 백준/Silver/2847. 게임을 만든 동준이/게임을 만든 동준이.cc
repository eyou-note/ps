#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,cnt=0; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n-2;i>=0;i--){
        if(a[i] >= a[i+1]){
            cnt+=a[i]-a[i+1]+1;
            a[i] -= a[i]-a[i+1]+1;
        }
    }

    cout<<cnt;

    return 0;
}
