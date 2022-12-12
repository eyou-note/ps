#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    long long n;
    cin>>n;

    if(n%2 == 0){
        cout<<"CY";
    }else{
        cout<<"SK";
    }

    return 0;
}     