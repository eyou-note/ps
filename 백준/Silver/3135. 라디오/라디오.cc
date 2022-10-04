#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int a,b,n,t,mn=0x7fffffff; cin>>a>>b>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        mn = min(mn,abs(t-b)+1);
    }

    cout<<min(mn, abs(a-b));


    return 0;
}

