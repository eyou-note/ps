#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int a[1025][1025], s[1025][1025];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m; cin>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
        } 
    }

    while(m--){
        long long sum = 0;
        int x1,y1,x2,y2; 
        cin>>x1>>y1>>x2>>y2;
        cout<<s[x2][y2]-(s[x2][y1-1] + s[x1-1][y2])+s[x1-1][y1-1]<<endl;
    }



    return 0;
}