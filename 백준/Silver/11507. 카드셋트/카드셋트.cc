#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int get_idx(char c){
    if(c=='P') return 0;
    else if(c=='K') return 1;
    else if(c=='H') return 2;
    else return 3;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int cnt[4]={13,13,13,13};
    bool greska = false;
    string in;
    set<string> st;

    cin>>in;
    for(int i=0;i<in.size();i++){
        string sub = in.substr(i,3);

        if(st.find(sub)==st.end()){
            st.insert(sub);
            cnt[get_idx(sub[0])]-=1;
        }else{
            greska = true;
            break;
        }
        i+=2;
    }

    if(greska) cout<<"GRESKA";
    else{
        for(int i=0;i<4;i++){
            cout<<cnt[i]<<' ';
        }
    }

    return 0;
}
