#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);
    
    int t,cnt=0; cin>>t;
    string s;    
    while(t--){
        stack<char> st;
        cin>>s;

        for(int i=0;i<s.size();i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top() == s[i]){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }
        }

        if(st.empty()) cnt+=1;
    }
    
    cout<<cnt;
    
    return 0;

}
