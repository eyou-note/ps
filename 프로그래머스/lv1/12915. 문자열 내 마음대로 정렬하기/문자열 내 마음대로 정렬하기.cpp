#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<char, string> a, pair<char, string> b){
    if(a.first<b.first) return true;
    else if (a.first == b.first && a.second < b.second) return true;
    
    return false;
}

vector<string> solution(vector<string> strs, int n) {
    vector<string> ans;
    vector<pair<char,string>> words;

    for(auto s : strs){
        char c = s[n];
        words.push_back({c, s});
    }

    sort(words.begin(), words.end(), cmp);
    for(auto w : words){
        ans.push_back(w.second);
    }

    return ans;
}