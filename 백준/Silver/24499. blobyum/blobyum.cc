#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,k,sum=0,mx=0; cin>>n>>k;
    vector<int> a(2*n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n;i<n+n;i++){
        a[i] = a[i-n];
    }

    for(int i=0;i<n+k;i++){
        if(i<k){
            sum += a[i];
            continue;
        }
        mx = max(mx,sum);
        sum += a[i];
        sum -= a[abs(k-i)];
    }

    cout<<mx;


    return 0;

}
