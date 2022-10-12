#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int chk[100001];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n,idx,cur_cnt=0,mx_cnt=0; cin>>n;
    for(int i=0;i<2*n;i++){
        cin>>idx;
        if(chk[idx]==0){
            chk[idx] = 1;
            cur_cnt+=1;
            mx_cnt = max(cur_cnt,mx_cnt);
        }else { 
            chk[idx] = 0;
            cur_cnt-=1;
        }
    }
    
    cout<<mx_cnt;

    return 0;
}

