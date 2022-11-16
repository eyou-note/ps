#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n, m; 
int a[8], b[8];
bool chk[8];

void dfs(int cnt){
    if(cnt==m){
        for(int i=0;i<m;i++){
            cout<<b[i]<<' ';
        }
        cout<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(!chk[i]){
            chk[i] = true;
            b[cnt] = a[i];
            dfs(cnt+1);
            chk[i] = false;
        }
    }
}


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    cin>>n>>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a, a+n);

    dfs(0);


    return 0;

}