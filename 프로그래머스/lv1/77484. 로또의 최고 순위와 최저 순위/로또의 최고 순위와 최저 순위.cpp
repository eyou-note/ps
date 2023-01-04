#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> ans;

    int zero = 0, same= 0;
    //배열의 크기가 작으므로 O(N^2)으로 푼다.
    //크다면 정렬 후 이분탐색으로 해야할듯.

    for(auto l : lottos){
        if(l == 0) {
            zero +=1;
            continue;
        }

        for(auto n : win_nums){
            if( n == l )
                same += 1;
        }
    }

    ans.push_back(zero == 0 && same == 0 ? 6 : 7 - (zero + same));
    ans.push_back(same == 0 ? 6 : 7 - same);

    return ans;
}