#include <vector>
using namespace std;

int cnt[200001];
int solution(vector<int> nums){
    int ans = nums.size()/2, category = 0;

    for(auto n : nums){
        if(cnt[n] == 0){
            category += 1;
        }
        cnt[n] = 1;
    }

    return ans < category ? ans : category;
}