#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

typedef struct _Data{
    int n;
    int p;
}Data;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    while(t--){
        int n,m,ans=0; cin>>n>>m;
        int cnt[10]={0,};
        queue<Data> q;

        for(int i=0;i<n;i++){
            Data d;
            d.n = i, cin>>d.p;
            q.push(d);
            cnt[d.p]+=1;
        }
        
        bool print = false;
        while(1) {
            Data d = q.front();
            for(int i=9;i>=1;i--){
                if(cnt[i]==0) continue;
                if(d.p == i){
                    ans+=1;
                    if(d.n == m){
                        print = true;
                        break;
                    }
                    cnt[i]-=1;
                }else{
                    q.push(d);
                }
                q.pop();
                break;
            }
            if(print) break;
        }

        cout<<ans<<endl;

    }


    return 0;
}