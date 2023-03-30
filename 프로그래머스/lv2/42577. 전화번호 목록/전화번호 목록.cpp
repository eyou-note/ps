#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> nums) {
    sort(nums.begin(), nums.end());

    for(int i=0;i<nums.size()-1;i++){
        if(nums[i] == nums[i+1].substr(0, nums[i].size()))
            return false;
    }

    return true;
}