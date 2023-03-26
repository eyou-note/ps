#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> nums) {
    vector<int> ans;
    set<int>result;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            result.insert(nums[i] + nums[j]);
        }
    }

    for(auto v : result){
        ans.push_back(v);
    }

    return ans;
}