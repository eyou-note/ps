#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> res(n);
    if(n>s){
        return {-1};
    }

    int q = s/n, r=s%n, add = (r==0)? 0 : 1;
    
    for(int i=n-1;i>=0;i--){
        res[i] = q;
        if(r>0){
            res[i]+=1;
            r--;
        }
    }
    
    return res;
}
