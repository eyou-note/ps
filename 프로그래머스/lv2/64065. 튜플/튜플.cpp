#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    return a.size()<b.size();
}

vector<string> parse_str(string s){
    string tmp;
    vector<string> result;

    int begin=0;
    for(int i=0;i<s.size();i++){
        if((s[i] == ',' && s[i+1] =='{')
            || i == s.size()-1){
            int add = i == s.size()-1 ? 1:0;
            tmp = s.substr(begin, i-begin+add);
            tmp.pop_back();
            tmp = tmp.substr(1, tmp.size());

            result.push_back(tmp);
            begin = i+1;
        }
    }

    sort(result.begin(), result.end(),cmp);

    return result;
}


vector<int> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<int> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(stoi(tmp));
    }

    return result;
}

vector<int> solution(string s) {
    vector<int> ans;
    string tmp = s.substr(1, s.size());
    tmp.pop_back();

    vector<string> strs = parse_str(tmp);
    
    set<int> st;
    for(auto str : strs){
        vector<int> nums =  split(str,',');

        for(auto n : nums){
            if(st.find(n) == st.end()){
                ans.push_back(n);
                st.insert(n);
            }
        }
    }
    return ans;
}
