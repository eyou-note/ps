#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> a, vector<vector<int>> cmds) {
    vector<int> ans;
    int t = cmds.size();
    for(int i=0;i<cmds.size();i++){
        vector<int> sub;
        int begin = cmds[i][0], end = cmds[i][1], idx = cmds[i][2];
        
        for(int j=begin-1; j<end; j++){
            sub.push_back(a[j]);
        }

        sort(sub.begin(), sub.end());      

        ans.push_back( sub[idx-1] ); 
    }
    return ans;
}