#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 

    char paint[255][7];
    int n,cnt,mn=36; cin>>n;
    pair<int, int> ans;

    for(int i=0;i<n;i++){
        for(int j=5*i;j<5*i+5;j++){
            for(int k=0;k<7;k++){
                cin>>paint[j][k];
            }
        }
    }
    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            if(i==j) continue;
            cnt=0;

            int idx1 = i*5, idx2 = j*5;
            for(int k=0;k<5;k++){
                for(int l=0;l<7;l++){
                    if(paint[idx1][l] != paint[idx2][l])
                        cnt++;
                }
                idx1+=1, idx2+=1;
            }

            if(cnt<mn){
                mn = cnt;
                ans = make_pair(i+1,j+1);
            }
        }

    }
    
    cout<<ans.first<<' '<<ans.second;

    return 0;
}

