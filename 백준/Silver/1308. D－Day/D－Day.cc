#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int target_y, target_m, target_d,
        cur_y, cur_m, cur_d, d;
    
int get_full_date(int y, int m){
    if(m==2){
        if((y%4==0 && y%100!=0)||y%400==0){
            return 29;
        }
        return 28;
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        return 31;
    }else{
        return 30;
    }
}

bool is_gg(){
    if(target_y - cur_y >1000) return true;
    if(target_y - cur_y == 1000 && target_m >= cur_m && target_d >= cur_d) return true;
    return false;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);
    
    cin>>cur_y>>cur_m>>cur_d>>target_y>>target_m>>target_d;

    if(is_gg()){
        cout<<"gg";
        return 0;
    }

    while(cur_y!=target_y || cur_m!=target_m){

        int full_date = get_full_date(cur_y, cur_m);
        d+=(cur_d==1) ? full_date : full_date-cur_d;
        
        if(cur_m == 12){
            cur_m = 1, cur_y+=1;
        }else{
            cur_m+=1;
        }
        cur_d = 1;
    }

    d += target_d;

    cout<<"D-"<<d;

    return 0;
}
