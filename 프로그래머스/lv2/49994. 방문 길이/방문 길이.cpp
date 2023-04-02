#include <bits/stdc++.h>

using namespace std;

map<char, vector<pair<int,int>>> visited;

pair<int,int> get_direction(char c){
    if(c == 'U'){
        return {0,1};
    }else if(c == 'D'){
        return {0,-1};
    }else if(c == 'L'){
        return {-1,0};
    }else{
        return {1,0};
    }
}

char reverse(char c){
    if(c == 'U') return 'D';
    else if(c=='D') return 'U';
    else if(c=='R') return 'L';
    else return 'R';
}

void marking_path(char c, pair<int,int> pos){
    visited[c].push_back(pos);
}

bool already_visited(char c, pair<int,int> pos){
    if(visited.find(c) == visited.end()) 
        return false;
    else{
        for(auto visited_point : visited[c]){
            if(visited_point.first == pos.first 
                && visited_point.second == pos.second)
                return true;
        }
    }
    return false;
}

int solution(string dirs) {
    int cnt = 0;

    pair<int,int> cur = {0,0};
    for(auto d : dirs){
        pair<int,int> next = get_direction(d);

        int nx = cur.first + next.first,
            ny = cur.second + next.second;

        if(nx<-5||ny<-5||nx>5||ny>5) continue;
        if(already_visited(d, {nx,ny})) {
            cur = {nx, ny};
            continue;
        }

        cnt+=1;
        marking_path(reverse(d), cur);
        marking_path(d, {nx,ny});

        cur = {nx, ny};
    }

    return cnt;
}
