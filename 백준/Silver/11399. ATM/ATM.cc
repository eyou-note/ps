#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    //shortest job first scheduling
    int n,ans=0; cin>>n;
    vector<int> jobs(n);

    for(int i=0;i<n;i++){
        cin>>jobs[i];
    }

    sort(jobs.begin(), jobs.end());

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            ans+=jobs[j];
        }
    }
    cout<<ans;

    return 0;
}
