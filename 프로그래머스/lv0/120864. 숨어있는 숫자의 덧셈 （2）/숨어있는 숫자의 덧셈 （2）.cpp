#include <string>
#include <vector>

using namespace std;

bool is_digit(char c){
    return c>='0' && c<='9';
}
int solution(string s) {
    int answer = 0;

    for(int i=0;i<s.size();i++){
        if(!is_digit(s[i])) continue;

        string tmp;
        tmp.push_back(s[i]);
        while(s[i+1]!='\0' && is_digit(s[i+1])){
            tmp.push_back(s[i+1]);
            i+=1;
        }
        answer += stoi(tmp);
    }

    return answer;
}