#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int ans = 0;

    while(num!=0){

        int r = num%10;
        ans += min(r, 10-r);
        num /= 10;

        if( (r > 5) || (r == 5 && num%10 >= 5)  ) {
            num+=1;
        }
    }

    return ans;
}