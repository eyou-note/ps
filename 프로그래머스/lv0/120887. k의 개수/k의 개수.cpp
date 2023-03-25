#include <string>
#include <vector>

using namespace std;

int solution(int begin, int end, int k) {
    int answer = 0;
    for(int i=begin; i<=end;i++){
        int n = i;
        while(n!=0){
            if(n%10 == k) 
                answer+=1;
            
            n/=10;
        }
    }
    return answer;
}
