#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int jun_money, jun_cnt=0, jun_total,
        sung_money, sung_cnt=0, sung_total,yesterday;
    
    cin>>jun_money;
    sung_money = jun_money;

    int  chart[14];

    for(int i=0;i<14;i++){
        cin>>chart[i];
    }

    for(int i=0;i<14;i++){
        jun_cnt += jun_money/chart[i];
        jun_money %= chart[i];
    }

    for(int i=0;i<11;i++){
        // i ~ i+3일을 검사해서 연속 오르는지, 연속 내리는지 판단
        if(chart[i]<chart[i+1] && chart[i+1]<chart[i+2] && chart[i+2]<chart[i+3]){
            //전량 매도
            sung_money += sung_cnt * chart[i+3];
            sung_cnt = 0;
        }

        if(chart[i]>chart[i+1] && chart[i+1]>chart[i+2] && chart[i+2]>chart[i+3]){
            //전량 매수
            sung_cnt += sung_money/chart[i+3];
            sung_money %= chart[i+3];
        }
    }

    jun_total = jun_money + (jun_cnt * chart[13]);
    sung_total = sung_money + (sung_cnt * chart[13]);

   if(jun_total == sung_total) cout<<"SAMESAME";
   else if (jun_total > sung_total) cout<<"BNP";
   else cout<<"TIMING";

    return 0;
}

