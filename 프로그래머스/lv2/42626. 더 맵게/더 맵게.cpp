#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());

    while(pq.size() > 1 && pq.top() < K){
        int result = pq.top();
        pq.pop();

        result += pq.top() * 2;
        pq.pop();

        pq.push(result);
        ans+=1;

    }
    if(pq.top()<K) return -1;
    return ans;
}