#include <string>
#include <vector>

using namespace std;


int solution(vector<int> sides) {
    int cnt = 0, 
        mx = sides[0]>sides[1] ? sides[0] : sides[1], 
        a = sides[0]>sides[1] ? sides[1] : sides[0];

    cnt += mx - (mx-a);
    cnt += (mx+a) - mx -1;

    return cnt;
}
