#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> seq, int k) {
    vector<int> ans;

    // sort(seq.begin(), seq.end());
    pair< pair<int,int>, int> mn = {{0x7fffffff, 0x7fffffff}, 0x7fffffff};

    int sum = 0, right = 0;
    for(int left=0;left<seq.size();left++){

        //right 가 n을 넘지 않고 sum+a[right] 가 k 보다 작으면
        while(right<seq.size() && sum+seq[right] <= k){
            sum += seq[right];
            right++;
        }
        if(sum == k){
            if(mn.second > right - left - 1) {
                mn = {{left, right-1}, right-left-1};
            }else if(mn.second == right- 1 - left && mn.first.first > left){
                mn = {{left, right-1}, right-left-1};
            }
            //left, right;
        }
        if(right == seq.size()) break;
        sum -= seq[left];
    }
    return {mn.first.first, mn.first.second};
}