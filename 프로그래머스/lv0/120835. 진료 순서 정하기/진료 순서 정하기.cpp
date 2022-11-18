#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> e) {
    vector<int> answer;

    int end = e.size();
    for(int i=0;i<end;i++){
        int grade=0;

        for(int j=0;j<end;j++){
            if(i==j) continue;
            if(e[i] < e[j])
                grade +=1;
        }
        answer.push_back(grade+1);
    }
    return answer;
}