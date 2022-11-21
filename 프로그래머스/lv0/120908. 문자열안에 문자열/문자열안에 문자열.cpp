#include <string>
#include <vector>

using namespace std;

int solution(string s1, string s2) {
    int answer = 2;
    if(s1.size() < s2.size()) answer = 2;
    else{
        
        for(int i=0;i<s1.size();i++){
            if(s1[i] == s2[0]){
                bool found = true;
                for(int j=0;j<s2.size();j++){
                    if(s1[i+j] != s2[j]){
                        found = false;
                        break;
                    }
                }
                if(found){
                    answer = 1;
                }
            }
        }
    }
    return answer;
}