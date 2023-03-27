#include<string>
#include <iostream>

using namespace std;
bool solution(string str){
    int sum = 0;
    for(auto s : str){
        if(s=='(') sum += 1;
        else{
            if(sum<=0) 
                return false;
            sum -= 1;
        }
    }
    
    return sum == 0;
}