#include <string>
#include <vector>

using namespace std;

string solution(vector<string> c1, vector<string> c2, vector<string> goal) {
    string ans = "Yes";
    int i=0,j=0;

    for(int k=0;k<goal.size();k++) {
        if(goal[k] == c1[i]){
            i+=1;
        }else if (goal[k] == c2[j]){
            j+=1;
        }else{
            ans="No";
            break;
        }
    }

    return ans;
}