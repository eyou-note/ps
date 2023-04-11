#include <bits/stdc++.h>

using namespace std;
vector<int> solution(vector<int> nums) {
    vector<int> ans(nums.size());
    stack<int> st;

    for(int i=nums.size()-1;i>=0;i--){
        while(!st.empty()){
            if(st.top() > nums[i]){
                ans[i] = st.top();
                break;
            }else{
                st.pop();
            }
       }
        if(st.empty()) ans[i] = -1;
        st.push(nums[i]);
    }

  
    return ans;
}
