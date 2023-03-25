#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";

    while(age){
        answer.insert(0, 1, 'a'+ (age % 10));
        age /= 10;
    }

    return answer;
}