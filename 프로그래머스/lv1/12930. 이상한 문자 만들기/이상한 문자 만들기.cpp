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

string solution(string str) {
    string ans = "";
    vector<string> result = split(str, ' ');

    for(auto s : result){
        string tmp;
        for(int i=0;i<s.size();i++){
            char c;
            if(i%2==0 && s[i]>='a' && s[i]<='z'){
                c = s[i] - 32;
            }else if(i%2!=0 && s[i]>='A' && s[i]<='Z'){
                c = s[i] + 32;
            }else{
                c = s[i];
            }
            tmp.push_back(c);
        }    
        ans.append(tmp);
        ans.push_back(' ');
    }
    if(str.back() != ' ')
        ans.pop_back();

    return ans;
}
