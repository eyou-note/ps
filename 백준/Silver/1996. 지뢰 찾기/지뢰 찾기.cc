#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

char m[1001][1001];
int dx[8]={1,1,0,-1,-1,-1,0,1},
    dy[8]={0,1,1,1,0,-1,-1,-1};
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n; cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char c = m[i][j];
            if(c=='.'){
                int mine=0;
                for(int k=0;k<8;k++){  //8방향 탐색
                    int nx = i + dx[k], ny = j + dy[k];
                    if(nx<0||ny<0||nx>=n||ny>=n) continue;

                    if(m[nx][ny] != '.'){
                        mine += (m[nx][ny]-'0');
                    }
                }
                cout<<(mine>9?"M":to_string(mine));
            }else{
                cout<<"*";
            }
        }
        cout<<'\n';
    }

    return 0;

}

