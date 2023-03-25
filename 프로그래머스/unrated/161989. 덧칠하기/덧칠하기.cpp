#include <string>
#include <vector>

using namespace std;


int solution(int n, int m, vector<int> section) {
    int cnt = 0;
    for(int i=0;i<section.size();i++){
        if(section[i]==0) continue;
        
        int begin = section[i], 
            end = begin + m -1;

        for(int j=i;j<section.size();j++){
            if(section[j] <= end)
                section[j] = 0;
            else
                break;
        }
        cnt+=1;
    }

    return cnt;
}

