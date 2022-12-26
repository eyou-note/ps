#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);  

    int n,k,l,cnt=0; 
    cin>>n>>k>>l;

    vector<int> ans;

    for(int i=0;i<n;i++){
        int sum=0;
        bool over = true;
        vector<int> a(3);
        
        for(int j=0;j<3;j++){
            cin>>a[j];
            sum+=a[j];
            if(a[j] < l) {
                over = false;
            }
        }

        if(over && sum >= k){
            cnt+=1;
            ans.push_back(a[0]);
            ans.push_back(a[1]);
            ans.push_back(a[2]);
        }
    }   

    cout<<cnt<<endl;
    for(auto a : ans){
        cout<<a<<' ';
    }

    return 0;
}     