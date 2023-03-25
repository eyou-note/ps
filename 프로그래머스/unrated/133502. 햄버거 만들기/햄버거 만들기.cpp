#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int ans = 0;
    string pattern = "1231", s;
    for(auto i : ingredient){
        s.push_back(i+'0');
    }

    int start, pos=0;
    while((start = s.find(pattern, pos)) != string::npos){
        s.replace(start, pattern.size(),"");
        ans+=1;
        if(start > 2) pos = start -3;
    } 

    return ans;
}
