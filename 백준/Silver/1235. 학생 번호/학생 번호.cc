#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin); 
    
    int n,k=1; cin>>n;
    vector<string> nums (n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    while(1){
        set<string> s;
        for(auto num : nums){
            string sub = num.substr(num.size()-k, num.size());
            s.insert(sub);
        }
        if(s.size() == n){
            break;
        }
        k+=1;
    }

    cout<<k;

    return 0;
}
