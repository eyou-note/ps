#include <string>
#include <vector>

using namespace std;

string toBinary(int num, int n){
    string res;
    while(num!=0){
        res = to_string(num%2)+res;
        num/=2;
    }
    while(res.size()!=n){
        res = "0"+res;
    }
    return res;
}

vector<string> solution(int n, vector<int> a1, vector<int> a2) {
    vector<string> ans;

    for(int i=0;i<n;i++){
        string b1 = toBinary(a1[i], n),
                 b2 = toBinary(a2[i], n), res;
            
        for(int j=0;j<n;j++){
            
            if(b1[j] == b2[j]) {
                res.push_back( b1[j] == '1' ? '#' : ' ' );
            }else{
                res.push_back('#');
            }
        }
        ans.push_back(res);
    }
    return ans;
}
