#include <string>
#include <vector>

using namespace std;

int path[9], mx = -1;
bool visited[9];

void DFS(int cnt, int num, int size, int total, vector<vector<int>>& d){
    if(cnt == size){
        int sum = 0; 
        for(int i=0;i<size;i++){
            vector<int> dungeon = d[path[i]];
            if(total >= dungeon[0]){
                total-=dungeon[1];
                sum += 1;
            }
        }
        mx = max(mx, sum);
    }

    for(int i=1;i<=size;i++){
        if(!visited[i]){
            visited[i] = true;
            
            path[cnt] = i-1;
            DFS(cnt+1,i,size,total,d);
            visited[i] = false;
        }

    }

}

int solution(int k, vector<vector<int>> dungeons) {

    DFS(0,1, dungeons.size(),k,dungeons);


    return mx;
}