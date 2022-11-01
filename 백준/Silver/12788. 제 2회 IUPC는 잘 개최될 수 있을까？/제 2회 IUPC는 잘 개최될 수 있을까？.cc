#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,m,k; cin>>n>>m>>k;
    int cnt=0, sum=0;
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end(),cmp);

    for(int i=0;i<n;i++){
        sum+=a[i];
        cnt+=1;

        if(sum >= m*k){
            break;
        }
    }

    if(sum < m*k) cout<<"STRESS";
    else cout<<cnt;

    return 0;
}
