#include <string>
#include <vector>

using namespace std;

string solution(string str, string skip, int idx) {
    string ans = "";

    for(auto c : str){
        char next = c;
        for(int i=1, pos=1;i<=idx;i++){
            next = (next + 1)%123 == 0 ? 'a' : (next+1);

            if( skip.find(next) != string::npos ){
                i-=1;
                continue;
            }
        }
        ans.push_back(next);
    }
    return ans;
}