#include <string>
#include <vector>

using namespace std;


int solution(vector<vector<int>> s) {
    int ans, w_mx=0 , h_mx=0;

    //O(N)
    for(int i=0;i<s.size();i++){
        int w = max(s[i][0], s[i][1]);
        int h = min(s[i][0], s[i][1]);
        w_mx = max(w_mx,  w);
        h_mx = max(h_mx,  h);
    }

    return w_mx * h_mx;
}

