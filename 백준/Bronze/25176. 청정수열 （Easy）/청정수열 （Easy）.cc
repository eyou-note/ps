#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int n,ans=1; cin>>n;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    cout<<ans;
    
    return 0;

}

