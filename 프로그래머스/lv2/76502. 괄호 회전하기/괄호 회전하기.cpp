#include <string>
#include <vector>
#include <stack>

using namespace std;
bool good(string str){
    stack<char> st;
    for(auto c : str){
        if(c=='('||c=='['||c=='{'){
            st.push(c);
        }else{
            if(st.empty()) return false;
            else if((c==')' && st.top() !='(') 
                        ||(c==']' && st.top() !='[') 
                        ||(c=='}' && st.top() !='{')) 
                        return false;
            else{
                st.pop();
            } 
        }
    }
    return st.empty();
}

int solution(string s) {
    int cnt = 0;
    string t = s;
    for(int i=0;i<s.size();i++){
        if(good(t)) cnt+=1;
        char front = t.front();
        t.push_back(front);
        t = t.substr(1, t.size());
    }
    return cnt;
}