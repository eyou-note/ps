#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int total = 0;

    while(chicken>=10){
        int service =  chicken / 10;
        total += service;
        chicken = service + (chicken%10);
    }
    return total;
}
