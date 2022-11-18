#include <vector>
#include <iostream>
#include <cmath>
using namespace std;


bool isPrimeNumber(int n){
    int end = (int)sqrt(n);
    for(int i=2;i<=end;i++){
        if(n%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0, end = nums.size();

    for(int i=0;i<end;i++){
        for(int j=i+1;j<end;j++){
            for(int k=j+1;k<end;k++){
                int sum = nums[i]+nums[j]+nums[k];
                if(isPrimeNumber(sum))
                    answer+=1;
            }
        }
    }
    return answer;
}
