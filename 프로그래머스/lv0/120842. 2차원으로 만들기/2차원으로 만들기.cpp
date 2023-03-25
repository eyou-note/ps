#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> nums, int n) {
    vector<vector<int>> ans;
    int pos = 0;
    for(int i=0;i<nums.size()/n;i++){
        vector<int>row;
        for(int j=0;j<n;j++){
            row.push_back(nums[pos++]);
        }
        ans.push_back(row);
    }
    return ans;
}