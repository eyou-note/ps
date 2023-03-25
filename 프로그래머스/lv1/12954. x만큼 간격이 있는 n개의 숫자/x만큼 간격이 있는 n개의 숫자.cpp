#include <string>
#include <vector>

using namespace std;
vector<long long> solution(int x, int n) {
    vector<long long> ans;

    long long acc=0;
    for(int i = 0; i<n; i++){
        acc += x;
        ans.push_back(acc);
    }

    return ans;
}