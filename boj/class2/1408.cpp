#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;


string add_zero(int n){
    return (n<10) ? "0"+to_string(n) : to_string(n);
}

void convert_hhmmss_and_print(int sec) {
    int h,m,s;
    h = sec / 3600;
    sec %= 3600;

    m = sec / 60;
    sec %= 60;

    s = sec;

    cout<<add_zero(h)<<":"<<add_zero(m)<<":"<<add_zero(s);
    
};

vector<string> split(string s, char delemiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss, tmp, delemiter)){
        result.push_back(tmp);
    }

    return result;
}

int init_input(){
    string in;
    cin>>in;
    vector<string> v = split(in, ':');

    return stoi(v[0])*3600 + stoi(v[1])*60 + stoi(v[2]);
}

int main(){
    fastio;
    freopen("input.txt", "r", stdin); 

    // 임무 시작시간이 다음날일수도 있다?? -_-
    int cur_sec = init_input(), 
            target_sec = init_input();

    if( cur_sec > target_sec ){
        // 다음날일경우의 처리    
        target_sec += (24*3600);
    }

    int diff_sec = target_sec - cur_sec;

    convert_hhmmss_and_print(diff_sec);
    

    return 0;
}     