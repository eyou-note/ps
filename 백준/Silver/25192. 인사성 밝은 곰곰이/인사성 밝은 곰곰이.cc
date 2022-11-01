#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n, cnt=0; cin>>n;
    set<string> names;
    string in;
    bool enter = false;

    while(n--){
        cin>>in;
        if(in=="ENTER"){
            names.clear();
            enter = true;
            continue;
        }

        if(enter){
            if(names.find(in) == names.end()){
                names.insert(in);
                cnt+=1;
            }
        }
    }

    cout<<cnt;

    return 0;
}
