#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int ans = 1;
    map<string, int> clothes_map;
    for (auto& c : clothes){
        ++clothes_map[c[1]];
    }
    for (auto& iter : clothes_map){
        ans *= (iter.second + 1);
    }
    return ans-1;
}