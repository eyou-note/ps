#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int dx[4]={1,0,-1,0},
    dy[4]={0,1,0,-1};
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int m,n,d,di=0; cin>>m>>n;
    pair<int, int> cur = make_pair(0,0);
    string s;

    while(n--){
        cin>>s>>d;
        if(s=="MOVE"){
            cur = { cur.first + dx[di] * d , cur.second + dy[di] * d};
            if(cur.first<0 || cur.second<0 || cur.first>=m || cur.second>=m){
                cout<<-1; 
                return 0;
            }
        }else{
            if(d == 0){
                di = (di+1)%4;
            }else{
                di = (di==0?3:di-1);
            }
        }
    }    

    cout<<cur.first<<' '<<cur.second;

    return 0;
}
