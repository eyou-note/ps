#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool cmp(vector<int> a, vector<int> b){
    return a[1]<b[1];
}

int solution(vector<vector<int>> routes) {
    int cnt = 0, nm = -30001;

    sort(routes.begin(), routes.end(), cmp);

    for(auto route : routes){
        
        if(route[0] > nm){
            nm = route[1];
            cnt+=1;
        }
    }

    return cnt;
}