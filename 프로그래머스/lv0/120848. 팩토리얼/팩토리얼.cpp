#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int ans, v=1;

    for(int i=2;i<=10;i++){
        v *= i;
        if(v>=n){
            if( v == n) ans = i;
            else   ans = i-1;
            break;
        }
    }
    return ans;
}