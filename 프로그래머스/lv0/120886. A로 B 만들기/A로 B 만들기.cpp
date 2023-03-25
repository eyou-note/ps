#include <string>
#include <vector>
#include<algorithm>

using namespace std;

int solution(string before, string after) {
    int cnt[26]={0,}, ans = 1;
    for(int i=0;i<before.size();i++){
        cnt[before[i]-'a'] += 1;
        cnt[after[i]-'a'] -= 1;
    }
    
    for(int i=0;i<26;i++){
        if(cnt[i] != 0) {
            ans = 0;
            break;
        }
    }

    return ans;
}