#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int n,k,cnt;
int a[101][101];
bool visited[101];

void dfs(int num){
    visited[num] = true; 
    for(int i=1;i<=n;i++){
        if(a[num][i]==1 && !visited[i]){
            dfs(i);
            cnt++;
        }
    }
}

int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);  

    int c1,c2;
    cin>>n>>k;

    for(int i=0;i<k;i++){
        cin>>c1>>c2;
        a[c1][c2] =  1;
        a[c2][c1] =  1;
    }
    
    dfs(1);
    cout<<cnt;

    return 0;

}
