#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

bool is_prime(int n){
    if(n == 1) return false;
    for(int i=2;i<=n;i++){
        if(n%i == 0 && i!=n) return false;
    }
    return true;
}

int solution(int a, int b) {
    int ans = 1;
    b/=gcd(a,b);
    vector<int> v;

    for(int i=2;i<=b;i++){
        if(b%i==0 && is_prime(i)){
            if(i != 2 && i != 5){
                ans = 2;
                break;
            }
        } 
    }
    return ans;
}

