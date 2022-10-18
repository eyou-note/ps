#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    string a, b; cin>>a>>b;
    int cnt, mn=0x7fffffff;

    for(int i=0;i<=b.size()-a.size();i++){
        cnt=0;

        for(int j=0;j<a.size();j++){
            if(a[j]!=b[i+j]) cnt+=1;
        }
        
        mn = min(mn,cnt);
    }

    cout<<mn;

    return 0;
}
