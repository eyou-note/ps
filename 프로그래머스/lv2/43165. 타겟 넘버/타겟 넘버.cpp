#include <string>
#include <vector>
#include <unordered_set>

using namespace std;
int answer = 0;
void DFS(vector<int>& num, int target, int cnt, int res){
    if(cnt == num.size()){
        if(res == target){
            answer += 1;
        }
        return;
    }

    DFS(num, target, cnt + 1, res - num[cnt]);
    DFS(num, target, cnt + 1, res + num[cnt]);
}

int solution(vector<int> nums, int target) {
    DFS(nums, target, 0, 0);
    return answer;
}
