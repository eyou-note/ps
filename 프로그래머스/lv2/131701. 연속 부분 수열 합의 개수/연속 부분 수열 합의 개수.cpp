#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elm) {
    int size = elm.size();
    set<int> result;
    for(int i=0;i<size;i++)
        elm.push_back(elm[i]);

   
    for(int i=1;i<=size;i++){

        for(int j=0;j<size;j++){
            int sum = 0;
            for(int k=j;k<j+i;k++){
                sum+=elm[k];
            }
            result.insert(sum);
        }
    }


    return result.size();
}