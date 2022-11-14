#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,m,a[9];

void dfs(int num, int pos){
    if(m == pos){
        for(int i=0;i<m;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
        return;
    }

    for(int i = num;i<=n;i++){
        a[pos] = i;
        dfs(i, pos+1);
    }
}

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    cin>>n>>m;

    dfs(1, 0);

    return 0;

}