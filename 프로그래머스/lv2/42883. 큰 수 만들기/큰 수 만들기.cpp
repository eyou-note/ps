#include <string>
#include <vector>
#include <stack>

using namespace std;

string solution(string number, int k) {
    string ans = "";
    stack<int> st;

    for(auto num : number){
        int n = num-'0';
            while(!st.empty() && k>0 && st.top()<n){
                k--;
                st.pop();
            }
            st.push(n);
    }
    if(k>0){
       for(int i=0;i<k;i++) st.pop();
    }
    while(!st.empty()){
        ans.insert(0, to_string(st.top()));
        st.pop();
    }

    return ans;
}
