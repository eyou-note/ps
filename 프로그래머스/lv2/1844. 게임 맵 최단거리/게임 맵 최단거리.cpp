#include<vector>
#include<queue>
using namespace std;


int dr[4]={1, 0, -1, 0}, dc[4]={0,1,0,-1};
int dist[101][101];
bool visited[101][101];
int n,m;
queue<pair<int,int>> q;

void BFS(pair<int, int> start, vector<vector<int> > maps){

    visited[start.first][start.second] = true;
    q.push(start);

    while(!q.empty()){
        pair<int,int> cur = q.front();
        q.pop();

        for(int i=0;i<4;i++){
            int nr = cur.first + dr[i],
                nc = cur.second + dc[i];

            if(nr<0||nc<0||nr>=n||nc>=m) continue;
            if(maps[nr][nc] ==0 || visited[nr][nc]) continue;

            dist[nr][nc] = dist[cur.first][cur.second]+1;
            // if(nr==n-1 && nc ==m-1){
            //     break;
            // }

            visited[nr][nc] = true;
            q.push({nr,nc});
        }   
    }
}

int solution(vector<vector<int> > maps){
    int ans = 0;
    n = maps.size(), m = maps[0].size();

    dist[0][0] = 1;
    BFS({0,0}, maps);
    ans = dist[n-1][m-1] == 0 ? -1 : dist[n-1][m-1];
    return ans;
}
