#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

typedef struct _Kayak{
    int no;
    int gap;
} Kayak;

bool cmp(Kayak a, Kayak b){
    if(a.gap<b.gap) return true;
    return false;
}

char d[51][51];
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int r,c,rank[10]={0,}; cin>>r>>c;
    Kayak kayaks[10];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>d[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=c-1;j>0;j--){
            char idx = d[i][j];
            if(idx>='1'&&idx<='9'){
                Kayak k = {idx-'0',  c-j-2};
                kayaks[idx-'0'] = k;
                break;
            }
        }
    }

    sort(kayaks+1, kayaks+10, cmp);

    int rk = 1;
    for(int i=1;i<=9;i++){
        Kayak me = kayaks[i];
        for(int j=i-1;j>0;j--){
            if(kayaks[j].gap == me.gap) {
                rk--;
                break;
            }
        }
        rank[me.no] = rk++;
    }

    for(int i=1;i<=9;i++){
        cout<<rank[i]<<'\n';
    }



    return 0;
}
