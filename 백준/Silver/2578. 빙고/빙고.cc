#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


bool is_cross1(pair<int, int> p){
    return (p.first == p.second) ;
}

bool is_cross2(pair<int, int> p){
    return (p.first == 0 && p.second == 4) || (p.first == 1 && p.second == 3) || (p.first == 2 && p.second == 2) 
                || (p.first == 3 && p.second == 1) || (p.first == 4 && p.second == 0);
}


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    int a[5][5], n, ans=0, binggo=0;
    unordered_map<int, pair<int,int>> cache;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            cache[ a[i][j] ] = make_pair(i,j);
        }
    }

    while(1){
        cin>>n;
        pair<int, int> p = cache.find(n)->second;
        a[p.first][p.second] = 0;
        ans+=1;
        int cnt=0;
        for(int i=0;i<5;i++){
            if(a[p.first][i] == 0) cnt+=1;
        }

        if(cnt==5) binggo += 1;
        if(binggo>=3) {
            break;
        }

        cnt=0;
        for(int i=0;i<5;i++){
            if(a[i][p.second] == 0) cnt+=1;
        }

        if(cnt==5) binggo += 1;
        if(binggo>=3) {
            break;
        }
        if(is_cross1(p)){    //
            cnt=0;
            for(int i=0;i<5;i++){
                 if(a[i][i] == 0) cnt+=1;
             }
            if(cnt==5) binggo += 1;
            if(binggo>=3) {
                break;
            }
        }

        if(is_cross2(p)){    //
            cnt=0;
            for(int i=0;i<5;i++){
                 if(a[i][4-i] == 0) cnt+=1;
             }
             if(cnt==5) binggo += 1;
             if(binggo>=3) {
                break;
             }

        }
    }

    cout<<ans;

    return 0;

}
