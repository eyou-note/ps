#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int cnt = 0;

    while(order){
        int r = order%10;
        if(r == 3 || r == 6 || r == 9){
            cnt+=1;
        }
        order /= 10;
    }

    return cnt;
}