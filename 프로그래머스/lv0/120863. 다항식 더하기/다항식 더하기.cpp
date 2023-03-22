#include <string>
#include <vector>
#include <sstream>

using namespace std;


vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        if(tmp=="+") continue;
        result.push_back(tmp);
    }

    return result;
}

string solution(string polynomial) {
    string ans = "";
    vector<string> peices = split(polynomial, ' ');

    int x_sum = 0, sum=0;
    for(auto p : peices){
        if(p.find('x') != string::npos){
            if(p == "x") x_sum += 1;
            else x_sum += stoi(p.substr(0,p.size()));
        }else{
            sum += stoi(p);
        }
    }

    if(x_sum == 0){
        ans = to_string(sum);
    }else if(x_sum != 0 && sum == 0){
        ans = x_sum == 1 ? "x" : to_string(x_sum)+"x";
    }else {
        ans = x_sum == 1 ? "x + " +to_string(sum) : to_string(x_sum)+"x + "+to_string(sum);
    }

    return ans;
}

