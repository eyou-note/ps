#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp (pair<int, double> a, pair<int, double> b){
    if(a.second > b.second) return true;
    else if(a.second == b.second && a.first < b.first) return true;
    return false;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> ans;
    vector<pair<int, double>> fail_rates;
    int u_cnt = stages.size();

    sort(stages.begin(), stages.end());
    
    //각 stage에 갇힌  유저가 몇명인지  O(logn)으로 찾음
    for(int i=1;i<=N;i++){
        int stuck_cnt = upper_bound(stages.begin(), stages.end(), i)
                                - lower_bound(stages.begin(), stages.end(), i);

        double rate = (stuck_cnt?(double) stuck_cnt / u_cnt : 0.0);

        fail_rates.push_back( {i, rate}) ;
    
        u_cnt -= stuck_cnt;
    }

    sort(fail_rates.begin(), fail_rates.end(), cmp);

    for(auto r : fail_rates){
        ans.push_back(r.first);
    }

    return ans;
}
