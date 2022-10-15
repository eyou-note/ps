#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool cmp(int a, int b){
    return a > b;
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);

    int n,mx=0; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end(),cmp);
    for(int i=0;i<n;i++){
        int w = a[i]*(i+1);
        mx=max(mx,w);
    }

    cout<<mx;



    return 0;
}
