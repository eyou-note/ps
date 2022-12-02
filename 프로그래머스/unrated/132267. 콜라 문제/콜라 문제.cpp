#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int ans = 0;

    while(n>=a){
        int r = (n/a)*b;
        ans += r ;
        n = r+ (n%a);
    }

    return ans;
}