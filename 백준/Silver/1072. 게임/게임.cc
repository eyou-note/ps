#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    long x, y;
    int z;
    cin>>x>>y;

    z = (y*100)/x;


    // 99%이면 아무리 많은 게임을 이겨도 100%가 될 수 없다.
    if(z >=99){
        cout<<-1;
        return 0;
    }

    int low=0, high = 1000000000, result;
    while(low<=high){
        //잠정적으로 정한 답(게임 수)
        int mid = (low+high)/2;
        
        //*100 하면 오버플로우 발생, 그래서 long 타입
        int p = ((y+mid)*100)/(x+mid);

        if(p > z){//게임을 줄여본다.
            result = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    cout<<result;

    return 0;
}