#include <string>
#include <vector>

using namespace std;

string solution(string str) {
    string answer = "";
    int cnt_l[26] = {0,}, cnt_u[26] = {0,}, space = 0;

    for(int i=0;i<str.size();i++){
        if(str[i]>='a'&&str[i]<='z'){
            if(cnt_l[str[i]-'a'] == 0) {
                answer.push_back(str[i]);
                cnt_l[str[i]-'a'] = 1;
            }
        }else if(str[i]>='A'&&str[i]<='Z'){
            if(cnt_u[str[i]-'A'] == 0) {
                answer.push_back(str[i]);
                cnt_u[str[i]-'A'] = 1;
            }
        }else{
            if(space == 0){
                answer.push_back(' ');
                space = 1;
            }
        }
    }
    return answer;
}
