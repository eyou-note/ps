#include <string>
#include <vector>

using namespace std;

string solution(string b1, string b2) {
    string answer = "";
    int carry = 0;

    if(b1.size()!= b2.size() && b1.size() > b2.size()){
        swap(b1, b2);
    }

    while(b1.size() != b2.size()){
        b1 = "0"+b1;
    }

    for(int i=b1.size()-1;i>=0;i--){
        int result = (b1[i]-'0') + (b2[i]-'0') + carry ;
        answer = to_string( result % 2 ) + answer;
        carry = result >= 2 ? 1 : 0; 
    }

    if(carry){
        answer = "1" + answer;
    }

    return answer;
}