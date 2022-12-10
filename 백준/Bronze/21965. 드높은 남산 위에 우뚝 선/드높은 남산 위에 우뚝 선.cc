#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, pos=0; cin>>n;
    bool mountain = true;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(pos=0; pos<n-1;pos++){
        if(a[pos] < a[pos+1]) continue;
        else if ( a[pos] == a[pos+1]){
            mountain = false;
            break;
        }else{
            break;
        }
    }

    for(int i=pos;i<n-1;i++){
        if(a[i] <= a[i+1]) {
            mountain = false;
            break;
        }
    }

    if(mountain) cout<<"YES";
    else cout<<"NO";

    return 0;
}     