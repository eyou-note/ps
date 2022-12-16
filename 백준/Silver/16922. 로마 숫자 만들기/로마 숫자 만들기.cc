#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int n, cnt, a[4]={1,5,10,50};
bool chk[1001];

void dfs(int sum, int size, int st){
    if(size == n) {
        if(!chk[sum]){
            cnt+=1;
            chk[sum] = true;
        }
        return ;
    }
    for(int i=st;i<4;i++){
        dfs(sum+a[i], size+1, i);
    }
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    cin>>n;

    dfs(0,0,0);

    cout<<cnt;

    return 0;
}     