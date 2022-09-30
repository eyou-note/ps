#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int x,y,p1,p2; cin>>x>>y>>p1>>p2;
    int step[101]={0,};

    if(p1>p2){
        swap(p1, p2);
        swap(x,y);
    }

    step[0] = p2;
    for(int i=1;i<=100;i++){
        step[i] = step[i-1] + y;
    }

    for(int i=0;i<=100;i++){
        
        for(int j=0;j<=100;j++){

            if(step[j] == p1){
                cout<<step[j];
                return 0;
            }
        }
        p1 += x;
    }

    cout<<-1;

    return 0;

}

