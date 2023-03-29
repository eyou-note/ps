#include <string>
#include <vector>

using namespace std;


vector<int> solution(int n, long long left, long long right) {
    vector<int> ans;
    for(long long i=left; i<=right; i++){

        ans.push_back( max( (i/n), (i%n))+1 ) ;

    }
  
    return ans;
}
