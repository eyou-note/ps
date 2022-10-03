#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,d,t,cnt[10]={0,}; cin>>n>>d;

    for(int i=1;i<=n;i++){
        t = i;
        while(t!=0){
            cnt[t%10]+=1;
            t/=10;
        }
    }
    cout<<cnt[d];
    
    return 0;
}

