#include <string>
#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0, diff = common[1]-common[0];

    if(common.size() == 2){
        answer = common[1] + diff;
    }else{
        int n = common[common.size()-1];
        if(common[1]-common[0] == common[2]-common[1]){
            answer = n + diff;
        }else{
            answer = n * (common[1]/common[0]);
        }
    }

    return answer;
}
