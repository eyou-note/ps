#include <string>
#include <vector>
#include <deque>

using namespace std;


int solution(int length, int weight, vector<int> truck_weights) {
    int time = 0, sum=0;
    deque<int> q(length);

    for(int i=0;i<truck_weights.size();i++){
        time += 1;
        sum -= q.front(); q.pop_front();
        if (sum + truck_weights[i] > weight) {
            q.push_back(0);
            i--;
        } else {
            q.push_back(truck_weights[i]);
            sum += truck_weights[i];
        }
    }

    return time+length;
}


