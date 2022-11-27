#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,t,begin,end; cin>>n;
    vector<int> a(n+1, 0), s(n+1, 0);
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s[i] = s[i-1] + a[i];
    }

    cin>>t;
    while(t--){
        cin>>begin>>end;
        cout<<s[end] - s[begin-1]<<endl;
    }

    return 0;
}