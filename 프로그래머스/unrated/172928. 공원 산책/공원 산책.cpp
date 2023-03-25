#include <string>
#include <vector>

using namespace std;

pair<int, int> get_direction(int d){
    if(d == 'S') return {1, 0};
    else if(d == 'N') return {-1, 0};
    else if(d == 'E') return {0, 1};
    else return {0, -1};
}

vector<int> get_start_pos(vector<string>& park){
    vector<int> result;
    bool found = false;
    for(int i=0;i<park.size();i++){
        for(int j=0;j<park[i].size();j++){
            if(park[i][j] == 'S'){
                result = {i,j};
                found = true;
                break;
            }
        }
        if(found) break;
    }
    return result;
}

//pair 말구 vector로 자료구조 맞춰주는게 좋을듯 하다;;
vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> cur_pos=get_start_pos(park); 
    int end = park[0].size();

    for(auto r : routes){
        pair<int, int> move = get_direction(r[0]);
        int loop = r[2]-'0';

        bool wall = false;
        pair<int,int> tmp_pos = {cur_pos[0], cur_pos[1]};
        for(int i=0;i<loop;i++){
            int nx = tmp_pos.first + move.first,
                ny = tmp_pos.second + move.second;
            
            if(park[nx][ny] == 'X' 
                || nx <0 || ny<0 || nx >= end ||ny >= end) {
                wall = true;
                break;
            }
            tmp_pos = {nx, ny};
        }
        if(!wall) 
            cur_pos = {tmp_pos.first, tmp_pos.second};
    }

    return cur_pos;
}

