#include <bits/stdc++.h>


using namespace std;


vector<int> solution(vector<int> p, vector<int> s) {
    vector<int> ans;
    queue<int> q;
    for(int i=0;i<p.size();i++){
        int r = ceil((double)(100-p[i]) / s[i]);
        q.push(r);
    }
    
    int cost = q.front(); q.pop();
    int cnt = 1;
    while(!q.empty()){
        if(cost>=q.front()){
            cnt+=1;
            q.pop();
        }else{
            ans.push_back(cnt);
            cost = q.front();
        q.pop();
            cnt=1;
        }
    }

    ans.push_back(cnt);

    return ans;
}