#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int ans = 0;
    stack<int> box;

    for(auto m : moves){
        int doll = 0;
        for(int i=0;i<board.size();i++){
            if(board[i][m-1] != 0){
                doll = board[i][m-1];
                board[i][m-1] = 0;
                break;
            }
        }

        if(doll){
            if(!box.empty() && box.top() == doll){
                box.pop();
                ans+=2;
            }else{
                box.push(doll);
            }
        }
    }
    return ans;
}
