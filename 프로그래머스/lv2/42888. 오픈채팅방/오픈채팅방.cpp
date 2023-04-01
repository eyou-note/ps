#include <bits/stdc++.h>

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

vector<string> solution(vector<string> record) {
    vector<string> ans;
    map<string, string> user_map;
    vector<vector<string>> result;
    string ENTER_MSG = "님이 들어왔습니다.", EXIT_MSG = "님이 나갔습니다.";

    for(auto r : record){
        vector<string> record_info = split(r,' ');
        string msg;

        if(record_info[0] == "Enter"){
            user_map[record_info[1]] = record_info[2];
            msg = ENTER_MSG;
        
        }else if(record_info[0] == "Leave"){
            msg = EXIT_MSG;

        }else{
            user_map[record_info[1]]  = record_info[2]; // update nickname
            continue;    
        }

        result.push_back({record_info[1], msg});

    }

    for(auto a : result){
        string nickname = user_map[a[0]];
        ans.push_back(nickname+a[1]);
    }

    return ans;
}