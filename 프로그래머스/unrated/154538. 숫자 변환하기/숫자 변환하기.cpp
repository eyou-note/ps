#include <bits/stdc++.h>


using namespace std;
int solution(int x, int y, int n) {
    
    if(x==y) return 0;
    
    int ans = 0;
    queue<pair<int,int>> q;
    set<int> st;
    st.insert(x);
    q.push({x,0});



    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();

        if(cur.first == y){
            ans = cur.second;
            break;
        }
        else if(cur.first < y){

            int x2 = cur.first * 2;
            if(st.insert(x2).second){
                q.push({x2, cur.second+1});
            }

            int x3 = cur.first * 3;
            if(st.insert(x3).second){
                q.push({x3, cur.second+1});
            }


            int add = cur.first + n;
            if(st.insert(add).second){
                q.push({add, cur.second+1});
            }
        }
    }

	return ans == 0 ? -1 : ans;
}