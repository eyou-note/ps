#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,m;
int a[8];

void dfs(int num, int pos){
    if(pos == m){
        for(int i=0;i<m;i++){
            cout<<a[i]<<' ';
        }cout<<endl;
        return;
    }

    for(int i=1;i<=n;i++){
        a[pos] = i;
        dfs(i+1, pos+1);
    }

}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    cin>>n>>m;

    dfs(1,0);

    return 0;
}