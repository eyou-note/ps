#include <string>
#include <vector>

using namespace std;


bool chk[11];
vector<string> total;
void dfs(int num, int size,  vector<string>& spell, string str){
    if(str.size() == size) {
        total.push_back(str);  
        return;
    }

    for(int i=0;i<size;i++){
        if(!chk[i]){
            chk[i] = true;
            dfs(i+1, size, spell, str+spell[i]);
            chk[i] = false;
        }
    }
}

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    dfs(0,spell.size(),spell, "");

    for(auto str : total){
        for(auto d : dic){
                if( str == d ) 
                    return 1;
        }
    }
    return answer;
}

