#include <string>
#include <vector>

using namespace std;


int dx[4] = {1, 0, -1,0}, 
    dy[4] = {0, -1, 0, 1 };
int board[100][100];

typedef struct _Point{
    int x;
    int y;
}Point;

int get_move_pos(string cmd){
    if(cmd == "right"){
        return 0;
    }else if(cmd == "down"){
        return 1;
    }else if(cmd == "left"){
        return 2;
    }else{
        return 3;
    }
}

vector<int> solution(vector<string> cmds, vector<int> wh) {
    vector<int> result;
    int w = wh[0], h = wh[1];

    Point cur = {w/2, h/2}; // 가운데를 시작점으로 잡음

    for(auto cmd : cmds){
        int move = get_move_pos(cmd);

        int nx = cur.x + dx[move], 
            ny = cur.y + dy[move];

        if(nx < 0 || nx >= w || ny < 0 || ny >= h) 
            continue;

        cur = {nx,ny};
    }

    result.push_back(cur.x - w/2);
    result.push_back(cur.y - h/2);

    return result;
}
