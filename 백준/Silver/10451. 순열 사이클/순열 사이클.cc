#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int a[1001],cnt,n;
bool visited[1001];

void init(){
    for(int i=1;i<=1000;i++){
        a[i] = 0;
        visited[i] = false;
    }
    cnt=0;
}

void dfs(int st){
    visited[st] = true;
    if(!visited[ a[st] ]){
        dfs(a[st]);
    }
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t,in; cin>>t;
    while(t--){
        cin>>n;

        for(int i=1;i<=n;i++){
            cin>>in;
            a[i] = in;
        }

        
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                dfs(i);
                cnt+=1;
            }
        }

        cout<<cnt<<endl;

        init();
    }

    return 0;

}