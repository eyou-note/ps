#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,mid,sum=0,mx=0; cin>>n; 
    mid = n/2;
    vector<int> a(n);
    map<int,int> cnt_m;

    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];

        if(cnt_m.find(a[i]) == cnt_m.end()){
            cnt_m[a[i]] = 1;
        }else{
            cnt_m[a[i]] += 1;
        }
    }

    for(auto cnt : cnt_m){
        mx = max(mx, cnt.second);
    }

    sort(a.begin(), a.end());

    int avg = round((double)sum/n);
    cout<<(avg==-0?0:avg)<<endl;
    cout<<a[mid]<<endl;
    if(n==1){
        cout<<a[0]<<endl<<0;
    }else{
        vector<int> v;
        for(auto cnt : cnt_m){
            if(cnt.second == mx) v.push_back(cnt.first);
        }
        cout<<(v.size()==1?v[0]:v[1])<<endl;
        cout<<a[n-1]-a[0];
    }

    return 0;
}