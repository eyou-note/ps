#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,m,t,in; cin>>n>>m;
    bool yes = true;

    while(m--){
        cin>>t;
        stack<int> s;
        for(int i=0;i<t;i++){
            cin>>in;
            s.push(in);
        }

        while(s.size()!=1){
            int top = s.top();
            s.pop();

            if(top > s.top()){
                yes = false;
                break;
            }
        }

        if(!yes){
            cout<<"No";
            return 0;
        }

    }

    cout<<"Yes";

    return 0;
}
