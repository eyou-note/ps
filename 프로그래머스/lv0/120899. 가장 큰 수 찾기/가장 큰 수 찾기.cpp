#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int mx = -1, idx;

    for(int i=0;i<arr.size();i++){
        if(arr[i] > mx){
            mx = arr[i];
            idx = i;
        }
    }

    answer.push_back(mx);
    answer.push_back(idx);


    return answer;
}