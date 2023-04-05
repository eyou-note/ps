#include <string>
#include <vector>
#include <stack>

using namespace std;

bool visited[51];

bool is_one_cnt(string str, string target){
    int cnt = 0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=target[i]) cnt+=1;
    }
    return cnt == 1;
}

int solution(string begin, string target, vector<string> words) {
    int ans = 0x7fffffff, cnt=0;

    stack<pair<string, int>> st;
    st.push({begin, cnt});

    // 깊이 우선 탐색 
    while(!st.empty()){
        pair<string, int> cur = st.top();
        st.pop();

        if(cur.first == target && ans > cur.second){
            ans  = cur.second;
        }

        for(int i=0;i<words.size();i++){
            if(is_one_cnt(cur.first, words[i])&&!visited[i]){
                visited[i] = true;
                st.push({words[i], cur.second+1});
            }
        }
    }

    return ans == 0x7fffffff ? 0 : ans;
}

