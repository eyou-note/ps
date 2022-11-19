#include <string>
#include <vector>


using namespace std;

int solution(int n, int l, int p) {
    int ans = 0;
    for(int i=1;i<=n;i++){
        int cnt=0;
        for(int j=1;j*j<=i;j++){  
            if(i%j==0) {
                cnt+=1;
                if(j*j<i) cnt+=1;
            }
        }
        ans += (cnt > l) ? p : cnt; 
    }
    return ans;
}
