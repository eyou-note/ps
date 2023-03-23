#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int w,h;
    for(int i=0;i<dots.size();i++){
        int x = dots[i][0], y = dots[i][1];
        for(int j=0;j<dots.size();j++){
            if(x != dots[j][0]){
                w = abs(dots[j][0] - x);
            } 
            if(y != dots[j][1]){
                h = abs(dots[j][1] - y);
            } 
        }
    }

    return w*h;
}
