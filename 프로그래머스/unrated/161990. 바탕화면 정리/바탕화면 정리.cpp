#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wp) {
    vector<int> ans;
    
    int c = wp[0].size(), r = wp.size();

    //시작점 찾기
    for(int i=0;i<r;i++){
        bool found = false;
        for(int j=0;j<c;j++){
            if(wp[i][j] == '#'){
                found = true;
                ans.push_back(i);
                break;
            }
        }
        if(found) break;
    }
    
    for(int i=0;i<c;i++){
        bool found = false;
        for(int j=0;j<r;j++){
            if(wp[j][i] == '#'){
                found = true;
                ans.push_back(i);
                break;
            }
        }
        if(found) break;
    }

    //끝점 찾기
    for(int i=r-1;i>=0;i--){
        bool found = false;
        for(int j=c-1;j>=0;j--){
            if(wp[i][j] == '#'){
                found = true;
                ans.push_back(i+1);
                break;
            }
        }
        if(found) break;
    }
    
    for(int i=c-1;i>=0;i--){
        bool found = false;
        for(int j=r-1;j>=0;j--){
            if(wp[j][i] == '#'){
                found = true;
                ans.push_back(i+1);
                break;
            }
        }
        if(found) break;
    }

    return ans;
}