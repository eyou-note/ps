#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string s;
    set<string> st;
    cin>>s;

    for(int i=1;i<=s.size();i++){
        string res;
        for(int j=0;j<=s.size()-i;j++){
            res = s.substr(j,i);
            st.insert(res);
        }
    }

    cout<<st.size();
    
    return 0;
}