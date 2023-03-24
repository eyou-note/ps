#include <string>
#include <vector>

using namespace std;

bool is_prime_number(int n){
    if(n == 1) return false;
    for(int i=2;i<=n;i++){
        if(n%i == 0 && i != n)
            return false;
    }
    return true;
}

vector<int> solution(int n) {
    vector<int> answer;

    for(int i=2;i<=n;i++){
        if(n % i == 0 && is_prime_number(i)){
            answer.push_back(i);
        }
    }

    return answer;
}
