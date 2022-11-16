#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int get_full_day(int m){
    if(m == 2) return 28;
    else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12) return 31;
    else return 30;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    string ans[8] = {"", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"} ;
    int d,m,total=0;
    cin>>d>>m;

    for(int i=1;i<m;i++){
        total += get_full_day(i);
    }
    
    total += d;

    cout<<ans[ (total%7)==0 ? 7 : (total%7) ];

    return 0;

}