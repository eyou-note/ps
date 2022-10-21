#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,r,c,cnt=0; cin>>n>>m;
    int a[201][201];
    for(int i=0;i<m;i++){
        cin>>r>>c;
        a[r][c] = a[c][r] = 1;
    }

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            for(int k=j+1;k<=n;k++){
                if(a[i][j]||a[j][k]||a[i][k]) continue;
                cnt+=1;
            }
        }
    }

    cout<<cnt;


    return 0;
}
