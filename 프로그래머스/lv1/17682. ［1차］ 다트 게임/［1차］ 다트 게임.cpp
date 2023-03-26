#include <string>
#include <vector>

using namespace std;int solution(string result) {
    int ans = 0, pos=0;
    vector<int> score(3);
    for(int i=0;i<result.size();i++){
        if(!(result[i]>='0' && result[i]<='9')) 
            continue;

        int n, next_idx;
        if(result[i+1] == '0'){
            n = 10;
            next_idx = i+1;
            i+=1;
        }else{
            n = result[i] - '0';
            next_idx = i;
        }
        
        if(result[next_idx+1] == 'D'){
            n *= n;
        }else if (result[next_idx+1] == 'T'){
            n = n*n*n;
        }

        if(result[next_idx+2] == '*'){
            n *= 2;
            if(pos != 0){
                score[pos-1] *= 2; 
            }
        }else if(result[next_idx+2] == '#'){
            n *= -1;
        }

        score[pos++] = n;
    }
    for(auto s : score){
        ans += s;
    }
    return ans;
}