#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int dr[8]={-1,0,1,0,-1,1,1,-1},
    dc[8]={0,1,0,-1,1,1,-1,-1};

int main(){
    fastio;
//    freopen("input.txt", "r", stdin);

    int r,c;
    while(1){
        cin>>r>>c;
        if(r==0&&c==0) break;

        char mine[101][101];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>mine[i][j];
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int cnt=0;
                if(mine[i][j]=='*'){
                    cout<<"*";
                }else{
                    for(int k=0;k<8;k++){
                        int nr = i+dr[k], nc = j+dc[k];
                        if(nr<0||nc<0||nr>=r||nc>=c) continue;
                        if(mine[nr][nc]=='*'){
                            cnt+=1;
                        }
                    }
                    cout<<cnt;
                }
            }
            cout<<'\n';
        }
    }

    return 0;
}
