#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int get_sum(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n;
    while(cin>>n){
        if(n==0) break;

        while(1){
            int result = get_sum(n);
            if(result < 10){
                cout<<result<<endl;
                break;
            }
            n = result;
        }
    }
    return 0;
}     