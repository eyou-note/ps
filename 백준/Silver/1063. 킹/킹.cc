#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

pair<int,int> get_pos(string s){
    pair<int, int> result;
    result.first = ((s[0]-'A')+1);
    result.second =  9-(s[1]-'0');
    return result;
}

int get_cmd(string s){
    if(s == "R"){
        return 0;
    }else if(s == "L"){
        return 1;
    }else if(s == "B"){
        return 2;
    }else if(s == "T"){
        return 3;
    }else if(s == "RT"){
        return 4;
    }else if(s == "LT"){
        return 5;
    }else if(s == "RB"){
        return 6;
    }else{
        return 7;
    }
}


void print(pair<int,int>& p){
    string s = "ABCDEFGH";
    //p.first, p.second;
    cout<<s[p.first-1]<<(8-p.second+1)<<endl;
}

int dx[8] = {1,-1,0,0,1,-1,1,-1},
    dy[8]= {0,0,1,-1,-1,-1,1,1};

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    string in;
    string pos = "HGFEDCBA";
    int t;
    pair<int,int> k,s;

    cin>>in;
    k = get_pos(in);

    cin>>in>>t;
    s = get_pos(in);

    while(t--){
        cin>>in;
        int cmd = get_cmd(in);

        //킹 이동
        int nx = k.first + dx[cmd],
            ny = k.second + dy[cmd];

        if(nx>8 || ny>8 || nx<=0 || ny<=0) continue;
        if(nx == s.first && ny == s.second){
            //돌과 겹치면 돌도 똑같이 이동
            int nx_s = s.first + dx[cmd]
                ,ny_s = s.second + dy[cmd];
            
            if(nx_s>8 || ny_s>8 || nx_s<=0 || ny_s<=0) continue;

            s.first = nx_s;
            s.second = ny_s;
        }

        k.first = nx;
        k.second = ny;
    }

    print(k);
    print(s);


    return 0;
}