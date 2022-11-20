#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n, k,sum=0,mx=0; cin>>n>>k;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(i<k) {
            mx+=a[i];
            sum+=a[i];
            continue;
        }else{
            sum+=a[i]-a[i-k];
        }
        mx = max(sum, mx);
    }
    cout<<mx;


    return 0;

}