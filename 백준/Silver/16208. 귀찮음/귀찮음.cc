#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n, sum=0;
    long long cost=0; cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    sort(a.begin(), a.end());

    for(int i=0;i<n;i++){
        sum-=a[i];
        cost+=sum*a[i];
    }

    cout<<cost;
    
  
    return 0;

}

