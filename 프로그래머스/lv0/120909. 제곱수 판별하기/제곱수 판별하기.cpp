#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;


int solution(int n) {
    int answer = 2, end = sqrt(n);

    for(int i=2;i<=end;i++){
        if(i*i == n) answer = 1;
    }

    return answer;
}