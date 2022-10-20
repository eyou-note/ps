#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int a[100001];
int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,m,in,cnt=0; cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>in;
        a[in] = 1;
    }
    
    for(int i=1;i<=100000;i++){
        if(m-i > 100000||m-i<0||i+i==m) continue;
        if(a[i]==1&&a[m-i]==1) {
            cnt+=1;
            a[i] = a[m-i] = 0;
        }
    }

    cout<<cnt;


    return 0;
}
