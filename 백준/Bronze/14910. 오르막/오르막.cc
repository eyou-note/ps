#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,prev;
    bool result = true;

    vector<int> a;
    while(cin>>n){
        a.push_back(n);
    }

    prev = a[0];
    for(int i=1;i<a.size();i++){
        if( a[i] < prev) {
            result = false;
            break;
        }
        prev = a[i];
    }

    cout<<(result?"Good":"Bad");

    return 0;
}     