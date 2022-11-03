#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int dx[8]={1,1,0,-1,-1,-1,0,1}, dy[8]={0,1,1,1,0,-1,-1,-1};
char a[10][10];
char mine[10][10];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;
    bool gameover = false;
    char in;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mine[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int cnt=0;
            for(int k=0;k<8;k++){
                int nx = i + dx[k], ny = j + dy[k];
                if(nx<0||ny<0||nx>=n||ny>=n) continue;

                if(mine[nx][ny] == '*') cnt+=1;
            }
            a[i][j] = cnt+'0';
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>in;
            if(in=='x'&&mine[i][j]=='*') {
                gameover = true;
            }else if(in!='x'){
                a[i][j]='.';
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(gameover && mine[i][j]=='*') cout<<'*';
            else cout<<a[i][j];
        }
        cout<<'\n';
     }

    return 0;
}
