#include <bits/stdc++.h>


using namespace std;

long long solution(int n, vector<int> works) {
    long long ans = 0;
    priority_queue<int> q(works.begin(), works.end());

    for(int i=0;i<n;i++){
        if(q.top()>0){
            int mx = q.top();
            q.pop();
            q.push(mx-1);
        }
    }

    while(!q.empty()){
        ans += (long long)q.top() * (long long)q.top();
        q.pop();
    }
    return ans;
}