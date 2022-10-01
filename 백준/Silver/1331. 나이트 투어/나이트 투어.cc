#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int dx[8]={-1,1,2,2,1,-1,-2,-2},
    dy[8]={-2,-2,-1,1,2,2,1,-1 };

bool visited[7][7];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    char c[7][7];
    string in, pos = "0123456";
    pair<int, int> cur,st,ed;
    cin>>in; cin.ignore();

    int x = pos[in[0]-'A'+1]-'0', y = in[1]-'0',
        all_visited=1, back_to_st=0, possible=1;

    visited[x][y] = true;  
    cur.first = x, cur.second = y;
    st.first = x, st.second = y;

    while(getline(cin, in)){
        x = pos[in[0]-'A'+1]-'0', y = in[1]-'0';
        
        for(int i=0;i<8;i++){
            int nx = cur.first + dx[i], 
                ny = cur.second + dy[i];

            if(nx<=0 || ny<=0 || nx>6 || ny>6) continue;
            if(nx == x && ny == y && !visited[nx][ny]){
                visited[x][y] = true;
                cur.first = x;  cur.second = y;
                all_visited+=1;
                break;
            }
        }

        if(!visited[x][y]){
            possible = 0;
        }
    }

    //첫번째로 돌아갈 수 있는지 확인
   for(int i=0;i<8;i++){
            int nx = cur.first + dx[i], 
                ny = cur.second + dy[i];

            if(nx<=0 || ny<=0 || nx>6 || ny>6) continue;
            if(nx == st.first && ny == st.second){
                back_to_st = 1;
                break;
            }
    }

    if(back_to_st && all_visited==36 && possible){
        cout<<"Valid";
    }else{
        cout<<"Invalid";
    }

    return 0;
}

