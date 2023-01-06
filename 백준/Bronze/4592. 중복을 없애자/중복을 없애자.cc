#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n;
    while(cin>>n){
        if(n==0) break;

        int prev = 0, num;

        for(int i=0;i<n;i++){
            cin>>num;
            
            if(prev == num) continue;
            
            cout<<num<<' ';
            prev = num;
        }
        cout<<'$'<<endl;
    }



    return 0;
}     