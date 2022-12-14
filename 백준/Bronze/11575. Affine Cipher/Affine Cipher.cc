#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int t,a,b; cin>>t;
    string in;
    while(t--){
        cin>>a>>b>>in;
        string ans;
        for(int i=0;i<in.size();i++){
            ans.push_back((((in[i]-'A') * a + b) % 26) + 'A');
        }
        cout<<ans<<endl;
    }

    return 0;
}     