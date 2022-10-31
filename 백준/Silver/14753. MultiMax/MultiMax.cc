#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, mx; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end(),cmp);

    mx = a[0] * a[1];
    mx = max(mx, a[0]*a[1]*a[2]);
    mx = max(mx, a[n-1]*a[n-2] );
    mx = max(mx, a[0]*a[n-1]*a[n-2] );

    cout<<mx;

    return 0;
    
}
