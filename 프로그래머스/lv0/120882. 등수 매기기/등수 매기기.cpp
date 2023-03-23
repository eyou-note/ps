#include <string>
#include <vector>

using namespace std;


vector<int> solution(vector<vector<int>> score) {
    vector<int> rank;
    vector<double> avg;

    for(auto s : score){
        avg.push_back((double)(s[0] + s[1])/2);
    }

    for(int i=0;i<avg.size();i++){
        double me = avg[i];
        int my_rank=0;
        for(int j=0;j<avg.size();j++){
            if(i==j) continue;

            if(me < avg[j])
                my_rank += 1;
        }
        rank.push_back(my_rank+1);
    }

    return rank;
}
