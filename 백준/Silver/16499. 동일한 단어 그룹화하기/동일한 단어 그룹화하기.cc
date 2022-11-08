#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    set<string> st;
    string in;

    for(int i=0;i<n;i++){
        cin>>in;

        sort(in.begin(), in.end());

        st.insert(in);
    }
    
    cout<<st.size();

    return 0;
}
