#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string solution(string my_string) {
    string answer;

    for(auto c : my_string){
        if(c>='A'&&c<='Z')
            answer.push_back(c+32);
        else 
            answer.push_back(c);
    }

    sort(answer.begin(), answer.end());

    return answer;
}
