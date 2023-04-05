#include <string>
#include <vector>

using namespace std;

int path[101][101];
int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;

    for(auto p : puddles){
        path[p[1]][p[0]] = -1;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(path[i][j] == -1) continue;
            if(i==1 && j==1) path[i][j] = 1;
            else{
                int before_step1 = path[i][j-1] == -1 ? 0 : path[i][j-1],
                    before_step2 = path[i-1][j] == -1 ? 0 : path[i-1][j];
                
                path[i][j] = (before_step1 + before_step2) % 1000000007;
            }
        }
    }

    return path[n][m];
}