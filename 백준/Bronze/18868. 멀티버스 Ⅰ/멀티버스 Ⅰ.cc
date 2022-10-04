#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


// 2 ≤ M ≤ 10
// 3 ≤ N ≤ 100
int space[11][101];
int main(){
    fastio;
//    freopen("input.txt", "r", stdin);  

    int m,n,cnt=0; cin>>m>>n;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>space[i][j];
        }
    }
    //우주끼리 비교
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){

            bool same = true;
            for(int k=0;k<n-1;k++){
                for(int l=k+1;l<n;l++){
                        if(space[i][k] < space[i][l] && space[j][k] < space[j][l]
                        || space[i][k] > space[i][l] && space[j][k] > space[j][l]
                        || space[i][k] == space[i][j] && space[j][k] == space[j][l]){
                            continue;
                        }else{
                            same = false;
                            break;
                        }
                }
                if(!same) break;
            }
            if(same) cnt+=1;
        }
    }

    cout<<cnt;

    return 0;
}

