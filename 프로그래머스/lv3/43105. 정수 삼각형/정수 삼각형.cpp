#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int ans = 0;
    vector<vector<int>> cache;

    cache.push_back({triangle[0][0]});

    for(int i=1;i<triangle.size();i++){
        vector<int> row;
        for(int j=0;j<triangle[i].size();j++){
            int sum = 0;
            if(j == 0){
                sum = triangle[i][j] + cache[i-1][j];
            }else if (j == triangle[i].size()-1){
                sum = triangle[i][j] + cache[i-1][j-1];
            }else{
                sum = max(triangle[i][j] + cache[i-1][j-1], triangle[i][j] + cache[i-1][j]);
            }
            row.push_back(sum);
        }
        cache.push_back(row);
    }

    sort(cache.back().begin(), cache.back().end());

    return cache.back().back();
}