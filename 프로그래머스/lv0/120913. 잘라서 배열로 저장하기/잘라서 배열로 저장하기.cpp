#include <string>
#include <vector>

using namespace std;


vector<string> solution(string my_str, int n) {
    vector<string> ans;
    for(int i=0;i<my_str.size();i+=n){
        ans.push_back(my_str.substr(i,n));
    }
    return ans;
}
