#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second > b.second) return true;
    return false;
}

int solution(int k, vector<int> t) {
    int total = 0, cnt = 0 ;
    map<int, int> cnt_m;

    for(int i=0;i<t.size();i++){
        if(cnt_m.find(t[i]) != cnt_m.end()){
            cnt_m[t[i]] += 1;
        }else{
            cnt_m[t[i]] = 1;
        }
    }

    vector<pair<int,int>> v(cnt_m.begin(), cnt_m.end());
    sort(v.begin(), v.end(),cmp);

    for(auto tg : v){
        total += tg.second;
        cnt+=1;
        if(total>=k) break;
    }

    return cnt;
}
