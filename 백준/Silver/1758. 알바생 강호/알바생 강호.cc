#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool cmp(int a, int b){
    return a>b;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,t; cin>>n;
    long long tip = 0;
    
    vector<int> m(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    sort(m.begin(), m.end(),cmp);
    for(int i=0;i<n;i++){
        tip += (m[i]-i >= 0) ? m[i]-i : 0;
    }

    cout<<tip;


    return 0;
}
