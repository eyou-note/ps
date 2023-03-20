#include <string>
#include <vector>

using namespace std;

int get_angle(vector<int> &p1, vector<int> &p2){
    return (p2[1] - p1[1]) /(p2[0] - p1[0]);
}

int solution(vector<vector<int>> dots) {
    int answer = 0;

    vector<int> p1 = dots[0], p2 = dots[1], 
                        p3 = dots[2], p4 = dots[3];

    if( get_angle(p1, p2) == get_angle(p3, p4) && get_angle(p3, p4) !=0 
    || get_angle(p1, p3) == get_angle(p2, p4) && get_angle(p2, p4) !=0
    || get_angle(p1, p4) == get_angle(p2, p3) && get_angle(p2, p3) !=0){
        answer = 1;
    }

    return answer;
}
