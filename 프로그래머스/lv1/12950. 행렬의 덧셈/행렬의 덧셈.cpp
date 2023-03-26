#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> a1, vector<vector<int>> a2) {
    vector<vector<int>> ans;

    for(int i=0;i<a1.size();i++){
        int sum = 0;
        vector<int> row;
        for(int j=0;j<a1[i].size();j++){
            row.push_back(a1[i][j] + a2[i][j]);
        }
        ans.push_back(row);
    }

    return ans;
}



