#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string s = to_string(num);
    int pos=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]-'0' == k){
            pos = i+1;
            break;
        }
    }
    return pos;
}
