#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> users) {
    string result = "fail";
    string id = id_pw[0], pw = id_pw[1];

    for(auto user : users){
        if(user[0] == id && user[1] == pw){
            result = "login";
            break;
        }else if(user[0] == id && user[1] != pw){
            result = "wrong pw";
            break;
        }
    }
    return result;
}