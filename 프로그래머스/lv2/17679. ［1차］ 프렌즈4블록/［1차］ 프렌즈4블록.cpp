#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int cnt = 0;

    while(1){
        set<pair<int,int>> v;
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n-1;j++){
                if(board[i][j] == 'X') continue;
                if(board[i][j] == board[i][j+1] 
                    && board[i][j+1] == board[i+1][j]
                    && board[i+1][j] == board[i+1][j+1]){
                        v.insert({i,j});
                        v.insert({i,j+1});
                        v.insert({i+1,j});
                        v.insert({i+1,j+1});
                }
            }
        }
        if(v.empty()) break;
        for(auto p : v){
            cnt+=1;
            board[p.first][p.second] = 'X';
        }

        for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            if(board[j][i] != 'X') continue;
            for(int k=j-1;k>=0;k--){
                if(board[k][i] != 'X'){
                    swap(board[k][i], board[j][i]);
                    break;
                }
            }
        }
    }
    }

    return cnt;
}
