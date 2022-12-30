#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n,in,ans=0; 
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>in;
        if( in == (i-ans) ) continue;
        ans+=1;
    }

    cout<<ans;
    
    return 0;
}     