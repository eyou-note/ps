#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


string winner_is(int *a, int *b){
    if(a[4] > b[4]) return "A";
    if(a[4] == b[4] && a[3] > b[3]) return "A";
    if(a[4] == b[4] && a[3] == b[3] && a[2] > b[2]) return "A";
    if(a[4] == b[4] && a[3] == b[3] && a[2] == b[2] && a[1] > b[1]) return "A";
    if(a[4] == b[4] && a[3] == b[3] && a[2] == b[2] && a[1] == b[1]) return "D";
    
    return "B";
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n; cin>>n;

   
    while(n--){
        int a, b,in;
        cin>>a;
        int a_score[5]={0,}, b_score[5]={0,};

        for(int i=0;i<a;i++){
            cin>>in;
            a_score[in]+=1;
        }
        cin>>b;
        for(int i=0;i<b;i++){
            cin>>in;
            b_score[in]+=1;
        }

        cout<< winner_is(a_score, b_score)<<'\n';

    }


    return 0;
}