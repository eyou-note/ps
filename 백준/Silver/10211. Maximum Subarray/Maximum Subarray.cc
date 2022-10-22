#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int get_max(vector<int>& a){
    int cur_sum, max_sum;
    cur_sum = max_sum = a[0];

    for(int i=1;i<a.size();i++){
        cur_sum = max(cur_sum+a[i], a[i]);
        max_sum = max(max_sum, cur_sum);
    }

    return max_sum;
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int t,n; cin>>t;
    while(t--){
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<get_max(a)<<'\n';
    }


    return 0;
}
