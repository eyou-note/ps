#include <string>
#include <vector>


using namespace std;

int arr[32];
int solution(int n, vector<int> lost, vector<int> reserve) {
    int cnt = 0;

    for(auto l : lost){
        arr[l] -= 1;
    }

    for(auto r : reserve){
        arr[r] += 1;
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==-1){
            if(arr[i-1] == 1)   arr[i-1]=arr[i]=0; 
            else if(arr[i+1] == 1) arr[i+1]=arr[i]=0; 
        }
        if(arr[i]>=0) cnt+=1;
    }


    return cnt;
}