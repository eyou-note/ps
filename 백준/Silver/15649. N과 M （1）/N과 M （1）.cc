#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,m,a[9];
bool checked[9];

void dfs(int level, string s){
    if(level == m){
        cout<<s<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!checked[i]){
            checked[i] = true;
            dfs(level+1, s+to_string(a[i])+" ");
            checked[i] = false;
        }
    }
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);   
    
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        a[i] = i;
    }

    dfs(0,""); 

    return 0;
}