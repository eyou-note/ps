#include <string>
#include <vector>

using namespace std;


int solution(vector<int> numbers, int k) {
    int idx = 0, cnt=1;

    while(cnt != k){
        idx = (idx + 2) % numbers.size();
        cnt+=1;
    }

    return numbers[idx];
}

