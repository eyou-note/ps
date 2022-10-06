#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  
    
    int n,in,ans=-1,cnt[51]={0,}; cin>>n;
    for(int i=0;i<n;i++){
        cin>>in;
        cnt[in]+=1;
    }
    for(int i=0;i<=50;i++){
        if(cnt[i] == i){   //문장이 등장한 횟수가 같으면
            ans = i;
        }
    }
    cout<<ans;

    return 0;

}

