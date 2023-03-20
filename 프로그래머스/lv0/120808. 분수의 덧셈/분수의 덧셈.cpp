#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b){
    return (a*b) / gcd(a,b);
}

vector<int> solution(int n1, int d1, int n2, int d2) {
    vector<int> answer;
    

    int lcm_v = lcm(d1, d2);

    n1 *= lcm_v/d1;
    n2 *= lcm_v/d2;

    int gcd_v = gcd(n1+n2, lcm_v);

    answer.push_back((n1+n2)/gcd_v);
    answer.push_back(lcm_v/gcd_v);

    return answer;
}
