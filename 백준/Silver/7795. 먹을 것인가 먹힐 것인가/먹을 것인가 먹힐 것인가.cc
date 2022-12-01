#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;


int main(){
    fastio;
  //  freopen("input.txt", "r", stdin);  

    int t,s1,s2; cin>>t;

    while(t--){
        cin>>s1>>s2;
        int cnt=0;
        vector<int> a(s1), b(s2);
        for(int i=0;i<s1;i++){
            cin>>a[i];
        }
        for(int i=0;i<s2;i++){
            cin>>b[i];
        }
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i=0;i<a.size();i++){
            cnt+=lower_bound(b.begin(), b.end(), a[i])-b.begin();
        }

        cout<<cnt<<endl;

    }


    return 0;
}