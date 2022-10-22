#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int m,n; cin>>m>>n;
    string nums[10]={"zero","one","two","three","four",
                                "five","six","seven","eight","nine"};
    map<string, int> mp;
    for(int i=m;i<=n;i++){
        int t = i;
        string tmp;
        while(t){
            tmp = nums[t%10] + tmp;
            t/=10;
        }   
        mp.insert({tmp, i});
    }


    int cnt=0;
    for(auto mm : mp){
        if(cnt==10) {
            cout<<'\n';
            cnt=0;
        }
        cout<<mm.second<<' ';
        cnt += 1;
    }


    return 0;
}
