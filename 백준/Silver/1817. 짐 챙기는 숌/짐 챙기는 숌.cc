#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,i,j,cnt=0; cin>>n>>m;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //sort(a.begin(), a.end());

    for(i=0;i<n;i++){
        int t = a[i];
        for(j=i+1;j<n;j++){
            t+=a[j];
            if(t>m) break;
        }
        i+=(j-i-1), cnt+=1;
    }

    cout<<cnt;

    return 0;
}

