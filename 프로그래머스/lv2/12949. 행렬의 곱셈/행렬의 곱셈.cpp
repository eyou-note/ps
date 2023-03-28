#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> a, vector<vector<int>> b) {
    vector<vector<int>> ans;

    for(int i=0;i<a.size();i++){
        vector<int> r;
        for(int j=0;j<b[0].size();j++){
            int sum = 0;
            for(int k=0;k<b.size();k++){
                sum += a[i][k] * b[k][j];
            }
            r.push_back(sum);
        }
        ans.push_back(r);
    }
    return ans;
}