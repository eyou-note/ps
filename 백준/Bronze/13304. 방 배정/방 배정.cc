#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

pair<int,int> st[3];

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,k,gender,grade,room=0;
    cin>>n>>k;

    while(n--){
        cin>>gender>>grade;

        if(grade==1||grade==2){
            st[0].first += 1;

        }else if(grade==3||grade==4){
            if(gender == 0) st[1].first += 1;
            else st[1].second += 1;
        
        }else{
            if(gender == 0) st[2].first += 1;
            else st[2].second += 1;
        }
    }

    for(int i=0;i<3;i++){
        room+=ceil((double)st[i].first/k );
        room+=ceil((double)st[i].second/k);
    }

    cout<<room;
  
    return 0;

}

