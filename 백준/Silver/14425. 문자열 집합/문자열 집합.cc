#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n, m, cnt=0;
    cin>>n>>m;

    string in;
    set<string> st;

    for(int i=0;i<n;i++){
        cin>>in;
        st.insert(in);
    }

    for(int i=0;i<m;i++){
        cin>>in;
        if(st.find(in) != st.end())
            cnt+=1;
    }

    cout<<cnt;

    return 0;

}