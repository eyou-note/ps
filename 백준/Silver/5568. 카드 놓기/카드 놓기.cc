#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

set<string> ans;
string a[10];
bool visited[10];
int n,k;
void dfs(int loop,  string result){
    if(loop==k){
        ans.insert(result);
        return;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]){
            visited[i] = true;
            dfs(loop+1,result+a[i]);
            visited[i] = false;
        }
    }
}
int main(){
    fastio;
 //   freopen("input.txt", "r", stdin);
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    dfs(0,"");
    
    cout<<ans.size();

    return 0;
}
