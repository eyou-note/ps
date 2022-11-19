#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int solution(int k, int m, vector<int> score) {
    int answer = 0, size = score.size();
    sort(score.begin(), score.end(), cmp);

    for(int i=0;i<size;i+=m){
        if(i+m>size) break;
        answer += score[i+m-1] * m;
    }
    return answer;
}