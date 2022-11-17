#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    string targets[4] = {"aya", "ye", "woo", "ma"};

    for(auto s : babbling){
        for(int i=0;i<4;i++){

            while(s.find(targets[i]) != string::npos){
                s.replace(s.find(targets[i]), targets[i].length(), "-");
            }

        }
        bool success = true;
        for(int i=0;i<s.size();i++){
            if(s[i]!='-') success = false;
        }

        if(success) answer+=1;
    }
        
    return answer;
}