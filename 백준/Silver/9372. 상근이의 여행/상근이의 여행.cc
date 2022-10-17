#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int t,n,m,a,b; cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>a>>b;
        }
        //양방향 그래프 이므로 모두 방문이 가능하다.
        //따라서 n-1번 타면 모든 국가를 방문할 수 있다.
        cout<<n-1<<'\n';
        
    }

    return 0;
}
