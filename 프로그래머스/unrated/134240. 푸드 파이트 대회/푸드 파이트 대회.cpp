#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string ans = "", rev="";

    for(int i=1;i<food.size();i++){
        for(int j=0;j<(int)food[i]/2;j++){
            ans.push_back(48+i);
        }
    }

    rev = ans;
    reverse(rev.begin(), rev.end());
    return ans+"0"+rev;
}