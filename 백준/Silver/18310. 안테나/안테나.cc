#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    if(n%2==0) cout<<a[n/2-1];
    else cout<<a[n/2];



}