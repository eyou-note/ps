#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,m,a[9];
bool checked[9];

void dfs(int num, int cnt){
    if(cnt == m){
        for(int i = 0; i < m; i++)
            cout << a[i] << ' ';
        cout << endl;
        return;
    }
    for(int i = num; i <= n; i++){
        if(!checked[i]){
            checked[i] = true;
            a[cnt] = i;
            dfs(i+1,cnt+1);
            checked[i] = false;
        }
    }
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);   
    
    cin>>n>>m;
    dfs(1,0); 

    return 0;
}