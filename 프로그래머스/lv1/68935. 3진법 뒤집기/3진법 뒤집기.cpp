#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int ans = 0, d=1;
    string base3;
    while(n){
        int r = n%3;
        base3 = to_string(r) + base3;
        n/=3;
    }

    //생략가능하지 않을까?
    // reverse(base3.begin(), base3.end());

    for(int i=0;i<base3.size();i++){
        ans += (base3[i]-'0') * d;
        d *= 3;
    }   

    return ans;
}
