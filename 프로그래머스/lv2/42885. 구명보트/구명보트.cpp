#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int ans = 0;
    // 가벼운애들끼리 태우면 안된다.
    sort(people.begin(), people.end());

    int i=0, j=people.size()-1;
    while(i<=j){
        if(people[i] + people[j] <= limit || i == j){
            i++; j--;
        }else{
            j--;
        }
        ans+=1;
    }

    return ans;
}
