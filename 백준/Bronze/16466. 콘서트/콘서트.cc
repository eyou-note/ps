#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,ans=1, pos=1; cin>>n;
    vector<int> ticket(n+1,0);

    for(int i=0;i<n;i++){
        cin>>ticket[i];
    }

    sort(ticket.begin(), ticket.end());

    while(1){
        if(ticket[pos] != ans){
            cout<<ans;
            break;
        }
        pos+=1, ans+=1;
    }
 

    return 0;
}

