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


vector<string> filter_bad_users(unordered_map<string, int>& cnt, unordered_map<string, set<string>>& um, int k){
    vector<string> res;
    for(auto m : um){
        for(auto s : m.second){
            cnt[s] += 1;
        }
    }

    for(auto c : cnt){
        if(c.second >=k){
            res.push_back(c.first);
        }
    }
    return res;
}

vector<int> solution(vector<string> ids, vector<string> report, int k) {
    vector<int> ans;
    unordered_map<string, int> cnt;
    unordered_map<string, set<string>> um;

    for(auto id : ids)
        cnt.insert({id, 0});
    
    for(auto r : report){
        vector<string> res = split(r, ' ');
        set<string> s;

        if(um.find(res[0])==um.end()){
            s.insert(res[1]);
            um.insert({res[0], s});
        }else{
            s = um.find(res[0])->second;
            s.insert(res[1]);
            um.find(res[0])->second = s;
        }
    }

    vector<string> bad_users = filter_bad_users(cnt, um, k);

    for(auto id : ids){
        int count=0;
        if(um.find(id) != um.end()){
            set<string> targets = um.find(id)->second;

            for(auto t : targets){
                for(auto b : bad_users){
                    if(t == b) count+=1;
                }
            }
            ans.push_back(count);
        }else{
            ans.push_back(0);
        }
    }

    return ans;
}
