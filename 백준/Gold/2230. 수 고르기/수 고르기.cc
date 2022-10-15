#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,m,mn=0x7fffffff; cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    int en=0;
    for(int st=0;st<n;st++){
        while(en<n&&a[en]-a[st]<m){
            en+=1;
        }
        if(en==n) break;
        mn = min(mn, a[en]-a[st]);
    }

    cout<<mn;

    return 0;
}
