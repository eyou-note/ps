#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,a[9];
bool chk[9];

void dfs(int num, int pos){
    if(n == pos){
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<endl;
        return;
    }

    for(int i = 1;i<=n;i++){
        if(!chk[i]){
            chk[i] = true;
            a[pos] = i;
            dfs(num+1, pos+1);
            chk[i] = false;
        }
    }
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    cin>>n;

    dfs(1, 0);

    return 0;

}