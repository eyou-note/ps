#include <string>
#include <vector>
#include <queue>

using namespace std;

bool visited[201];
queue<int> q;

int solution(int n, vector<vector<int>> computers) {
    int ans = 0;

    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        q.push(i);
        ans+=1;
   
    while(!q.empty()){
            int cur_pos = q.front(); 
            q.pop();

            for(int j=0;j<n;j++){
                if(j==cur_pos || visited[j] || computers[cur_pos][j] == 0) continue;
                q.push(j);
                visited[j] = true;
            }
        }
    }

    return ans;
}

