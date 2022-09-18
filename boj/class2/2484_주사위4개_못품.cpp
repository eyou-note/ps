#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    freopen("input.txt", "r", stdin);

    // mx 초기화 문제였음......;;
    int n,in,total,mx=0; cin>>n;
    while(n--){
        map<int, int> dice;
        total = 0;
        for(int i=0;i<4;i++){
            cin>>in;

            if(dice.find(in) == dice.end()){
                dice[in] = 1;
            }else{
                dice[in]++;
            }
        }
        
        if(dice.size() == 1){
            total = 50000 + dice.begin()->first * 5000;
        }else if (dice.size()==3){
            // 3 3 2 1 
            for(auto d : dice){
                if (d.second == 2){
                    total = 1000 + d.first * 100;
                    break;
                }
            }
        }else if (dice.size()==2){
            bool two_pair = true;
            for(auto d : dice){
                if (d.second == 3){
                    total = 10000 + d.first * 1000;
                    two_pair = false;
                    break;
                }
                total +=  d.first * 500;
            }
            if(two_pair)
                total += 2000;

        }else{
            total = (--dice.end())->first * 100;
        }
    
        mx =  max(total,mx);
    }

    cout<<mx;
    
    return 0;
}     

