#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

char ground[51][51], 
        template_w[8][8]={
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                    },
        template_b[8][8]={
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                        {'B','W','B','W','B','W','B','W'}, 
                                        {'W','B','W','B','W','B','W','B'},
                                    };
int m,n,ans=65;

void init(){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>ground[i][j];
        }
    }
}

void solve(){
    for(int i=0;i<=m-8;i++){
        for(int j=0;j<=n-8;j++){
            
            int cnt_w=0;
            for(int k=0;k<8;k++){
                for(int l=0;l<8;l++){
                    if( ground[k+i][l+j] != template_w[k][l])
                        cnt_w++;
                }
            }

            ans = min(cnt_w, ans); 
        }
    }

    for(int i=0;i<=m-8;i++){
        for(int j=0;j<=n-8;j++){

            int cnt_b=0;
            for(int k=0;k<8;k++){
                for(int l=0;l<8;l++){
                    if( ground[k+i][l+j] != template_b[k][l])
                        cnt_b++;
                }
            }
            
            ans = min(cnt_b, ans);
        }
    }

}

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    //일단 저장하고
    //8x8  완전 탐색 하면서
    //최소 카운트를 찾아야할것 같은데

    cin>>m>>n;

    init();
    solve();

    cout<<ans;

    return 0;
}   