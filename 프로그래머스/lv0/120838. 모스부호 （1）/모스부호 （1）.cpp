#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }

    return result;
}

string solution(string letter) {
    string ans=""; 
    string morse[26] = {".-","-...","-.-.","-..",".",
                                    "..-.","--.","....","..",".---",
                                    "-.-",".-..","--","-.","---",".--.",
                                    "--.-",".-.","...","-","..-","...-",
                                    ".--","-..-","-.--","--.."};
    vector<string> peices = split(letter, ' ');
    for(auto p : peices){
        for(int i=0;i<26;i++){
            if(p == morse[i]){
                ans.push_back('a'+i);
                break;
            }
        }
    }

    return ans;
}