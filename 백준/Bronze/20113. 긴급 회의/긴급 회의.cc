#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,in,mx=0,cnt=0,ans; 
    map<int, int> vote;
    
    cin>>n;

    for(int i=1;i<=n;i++){
        cin>>in;

        if(vote.find(in) == vote.end()){
            vote[in] = 1;
        }else{
            vote[in] += 1;
        }
        if( in != 0 )
            mx = max(mx,  vote[in]);
    }

    for(auto v : vote){
        if(v.second == mx && v.first !=0){
            ans = v.first;
            cnt+=1;
        }
    }

    if(cnt > 1 || cnt == 0) cout<<"skipped";
    else cout<<ans;

    return 0;

}