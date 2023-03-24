#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int cnt[26]={0,};

    for(int i=0;i<s.size();i++){
        cnt[ s[i] - 'a' ] += 1;
    }

    for(int i=0;i<26;i++){
        if(cnt[i] == 1)
            answer.push_back('a'+i);
    }

    return answer;
}