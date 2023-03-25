#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keys, vector<string> str) {
    vector<int> ans;
    map<char, int> k_cnt;   

    for(auto k : keys){
        for(int i=0;i<k.size();i++){
            if(k_cnt.find( k[i] ) == k_cnt.end()){
                k_cnt[k[i]] =  i+1;
            }else{
                k_cnt[k[i]] = min(k_cnt[k[i]], i+1);
            }
        }
    }

    for(auto s : str){
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(k_cnt.find(s[i]) == k_cnt.end()){
                cnt = -1;
                break;
            }

            cnt+= k_cnt.find(s[i])->second;
        }
        ans.push_back(cnt);
    }

    return ans;
}
