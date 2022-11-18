#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer, v;
    int sum=0;
    for(int i=-50; i<=1000;i++){
        v.push_back(i);
    }

    for(int i=0;i<v.size();i++) {
        if(i<num) {
            sum+=v[i];
            continue;
        }

        sum+=(v[i]-v[i-num]);

        if( sum == total ){
            for(int j=i-num+1;j<=i;j++){
                answer.push_back( v[j] );
            }
        }
    }

    return answer;
}
