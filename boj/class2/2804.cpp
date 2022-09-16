#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin);

    string a, b;    
    int a_idx, b_idx, done=0;
    char m[30][30];
    memset(m, '.', sizeof(m));

    cin>>a>>b;

    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if( a[i] == b[j] ){
                a_idx = j;
                b_idx = i;
                done = 1;
                break;
            }
        }
        if(done) break;
    }

    for(int i=0;i<a.size();i++){
        m[a_idx][i] = a[i];
    }

    for(int i=0;i<b.size();i++){
        m[i][b_idx] = b[i];
    }

    for(int i=0;i<b.size();i++){
        for(int j=0;j<a.size();j++){
            cout<<m[i][j];
        }
        cout<<'\n';
    }
    

    return 0;
}     