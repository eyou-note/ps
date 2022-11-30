#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer, tmp;
    for(int i=0;i<score.size();i++){

        tmp.push_back( score[i] );
        sort(tmp.begin(), tmp.end(), greater<>());

        if(tmp.size() <= k) answer.push_back(tmp.back());
        else answer.push_back(tmp[k-1]);
    }

    return answer;
}
