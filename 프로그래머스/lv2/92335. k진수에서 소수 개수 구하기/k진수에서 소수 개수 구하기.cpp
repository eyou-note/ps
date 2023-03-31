#include <string>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;


bool is_prime_num(long n){
    if(n==1) return false;
    int end = (int)sqrt(n);

    for(int i=2;i<=end;i++){
        if(n%i==0) return false;
    }
    return true;
}

string to_k_number(int n, int k){
    if(k==10) return to_string(n);
    string result;

    while(n){
        int r = (n%k);
        result = to_string(r) + result;
        n/=k;
    }
    return result;
}

vector<string> split(string s, char delimiter){
    stringstream ss(s);
    string tmp;
    vector<string> result;

    while(getline(ss,tmp,delimiter)){
        result.push_back(tmp);
    }
    return result;
}

int solution(int n, int k) {
    int ans = 0;
    string k_num = to_k_number(n,k);
    vector<string> nums = split(k_num, '0');
    for(auto n : nums){
        if(n=="") continue;
        if(is_prime_num(stol(n)))
            ans+=1;
    }
    return ans;
}