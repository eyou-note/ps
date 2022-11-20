#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n,m;
int a[9],b[9];

void dfs(int num, int cnt){
    if(cnt == m){
        for(int i=0;i<m;i++){
            cout<<b[i]<<' ';
        }
        cout<<endl;
        return;
    }

    for(int i=num;i<n;i++){
        b[cnt]=a[i];
        dfs(i+1, cnt+1);
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

    dfs(0,0);

    return 0;

}