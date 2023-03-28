#include <string>
#include <vector>

using namespace std;


int solution(vector<int> arr) {
    int ans = 0,mx =0;
    for(int i=0;i<arr.size();i++){
        mx = max(mx, arr[i]);
    }

    for(int i=mx;;i+=mx){
        bool found = true;
        for(int j=0;j<arr.size();j++){
            if(i % arr[j] !=0){
                found = false;
                break;
            }
        }

        if(found){
            ans = i;
            break;
        }
    }

    return ans;
}