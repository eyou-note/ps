#include <bits/stdc++.h>


#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int t[4][4], GAME=9;
void turn(int &n){
    n=(n==1)?2:1;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int p,r,c,cnt; cin>>p;
    bool draw = true;

    while(GAME--){
        cin>>r>>c;
        t[r][c] = p;

        //게임이 끝났는지 체크
        //로우 확인
        cnt=0;
        for(int i=1;i<=3;i++){
            if(t[r][i]!=p) 
                break;
                
            cnt+=1;
        }
        if(cnt==3) {
            draw = false;
            break;
        }

        //컬럼 확인        
        cnt=0;
         for(int i=1;i<=3;i++){
            if(t[i][c]!=p) 
                break;
                
            cnt+=1;
        }

        if(cnt==3) {
            draw = false;
            break;
        }

        //대각선도 확인
        if(t[1][3]==p && t[2][2]==p && t[3][1]==p || t[1][1]==p && t[2][2]==p && t[3][3]==p){
            draw = false;
            break;
        } 
        turn(p);
    }
    
    cout<<(draw?0:p);

    return 0;

}

