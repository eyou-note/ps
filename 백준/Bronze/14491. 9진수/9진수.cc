#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    int n; cin>>n;
    stack<int> st;

    while(n!=0){
        st.push(n%9);
        n/=9;
    }

    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    
    return 0;
}     