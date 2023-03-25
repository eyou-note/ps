#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int x) {
    pair<int, int> mn = {101, 101};

    for(auto num : arr){
        int diff = abs(x-num);
        if( diff < mn.second ){
            mn = {num, abs(x-num)};
        }else if ( diff == mn.second && mn.first > num){
            mn = {num, abs(x-num)};
        }
    }
    return mn.first;
}
