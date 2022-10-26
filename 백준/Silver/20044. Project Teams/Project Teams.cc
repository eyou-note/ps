#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 

    int n,mn=0x7fffffff; cin>>n;
    vector<int> w(n*2);

    for(int i=0;i<2*n;i++){
        cin>>w[i];
    }
    sort(w.begin(), w.end());

    for(int i=0;i<n;i++){
        mn = min(mn,w[i] + w[2*n-1-i]);
    }

    cout<<mn;

    return 0;
}
