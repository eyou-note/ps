#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string ans = "";

    for(int i=0;i<s.size();i++){
        int idx = s[i];
        if(idx>='A'&&idx<='Z'){
            idx = ((idx+n) > 'Z' ? (idx+n)%91+'A' : idx+n);
        }else if(idx>='a'&&idx<='z'){
            idx = ((idx+n) >  'z' ? (idx+n)%123+'a' : idx+n);
        }

        ans.push_back(idx);
    }

    return ans;
}