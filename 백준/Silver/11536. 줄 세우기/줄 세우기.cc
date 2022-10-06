#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    string in,asc, desc;
    vector<string> names(n);
    for(int i=0;i<n;i++){
        cin>>names[i];
        in+=names[i];
    }
    
    sort(names.begin(), names.end());

    for(int i=0;i<n;i++){
        asc += names[i];
        desc += names[n-1-i];
    }

    if(in == asc) cout<<"INCREASING";
    else if (in == desc) cout<<"DECREASING";
    else cout<<"NEITHER";

    return 0;

}

