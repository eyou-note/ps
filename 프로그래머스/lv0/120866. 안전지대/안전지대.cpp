#include <string>
#include <vector>

using namespace std;

int dx[8]={1,1,0,-1,-1,-1,0,1},
    dy[8]={0,1,1,1,0,-1,-1,-1};

int solution(vector<vector<int>> board) {
    int ans = 0, limit = board.size();

    for(int i=0;i<limit;i++){
        for(int j=0;j<limit;j++){
            // 내가 폭탄이 아니고, 내 주변이 폭탄이 아니면 카운트
            if(board[i][j]==1) continue;

            bool is_boom = false;
            for(int k=0;k<8;k++){
                int nx = i + dx[k], 
                    ny = j + dy[k];

                if(nx<0 || nx>=limit || ny<0 || ny>=limit) continue;
                if(board[nx][ny] == 1) {
                    is_boom = true;
                    break;
                };
            }
            if(!is_boom) ans+=1;
        }
    }
    return ans;
}

