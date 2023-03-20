#include <string>
#include <vector>

using namespace std;


int cnt[1001];
int solution(vector<int> a) {
    int answer = 0, mx = 0, found = 0;

    for(auto item : a){
        cnt[ item ] +=1 ;
        mx = max(cnt[item], mx);
    }

    for(int i=0;i<1001;i++){
        if(found && cnt[i] == mx) return -1;
        else if(cnt[i] == mx){
            answer = i;
            found = 1;
        }
    }

    return answer;
}