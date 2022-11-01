#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    string in;
    set<string> st;

    cin>>in;
    st.insert(in);

    for(int i=1;i<n;i++){
        cin>>in;
        bool found = false;
        for(auto s : st){
            if(s.size() == in.size()){
                string t = s+s;
                if(t.find(in) != string::npos){
                    found = true; 
                    break;
                }    
            }
        }
        if(!found) st.insert(in);
    }

    cout<<st.size();

    return 0;
}
