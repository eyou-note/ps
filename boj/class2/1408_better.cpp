#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    int h,m,s, cur_sec, st_sec, ans;
    
    scanf("%d:%d:%d",&h,&m,&s);
    cur_sec = h*3600 + m*60 +s;

    scanf("%d:%d:%d",&h,&m,&s);
    st_sec = h*3600 + m*60 + s;

    if( cur_sec > st_sec ){
        st_sec += 24 * 3600;
    }

    ans = st_sec - cur_sec;
    
    h = ans/3600, ans %= 3600;
    m = ans/60 , ans %=60;
    s = ans;

    printf("%02d:%02d:%02d", h,m,s);

    return 0;
}     