#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


int a[501][501];

int find_nine(int n){
    int cnt = 0;
    while(n!=0){
        if(n%10 == 9){
            cnt+=1;
        }
        n/=10;
    }
    return cnt;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m,cnt,r_cnt=0,c_cnt=0,total_cnt=0; 
    cin>>n>>m;

    for(int i=0;i<n;i++){
        cnt=0;
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            total_cnt += find_nine(a[i][j]);
            cnt+=find_nine(a[i][j]);
        }
        r_cnt = max(cnt, r_cnt);
    }

    for(int i=0;i<m;i++){
        cnt=0;
        for(int j=0;j<n;j++){
            cnt+=find_nine(a[j][i]);
        }
        c_cnt = max(cnt, c_cnt);
    }

    cout<<total_cnt-max(r_cnt,c_cnt);

    return 0;

}

