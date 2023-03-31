#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, 
                    vector<int> number, 
                    vector<string> discount) {
    int ans = 0, size = number.size();

    for(int i=0;i<=discount.size()-10;i++){
        map<string, int> discount_map;

        for(int j=i;j<i+10;j++){
            ++discount_map[discount[j]];
        }

        bool join = true;
        for(int k=0;k<size;k++){
            map<string,int>::iterator it = discount_map.find(want[k]);
            
            if(it == discount_map.end() || it->second < number[k] ){
                join = false;
                break;
            }

        }
        if(join) ans+=1;
    }

    return ans;
}