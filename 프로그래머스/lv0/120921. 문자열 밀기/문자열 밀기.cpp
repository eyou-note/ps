#include <string>
#include <vector>

using namespace std;

int solution(string a, string b) {
    a+=a;
    int answer = a.find(b);
    if(answer == -1){
        return answer;
    }
    int diff =  b.size() - answer;

    return diff==b.size() ? 0 : diff;
}