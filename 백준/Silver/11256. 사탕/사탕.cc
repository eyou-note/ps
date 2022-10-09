#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int t,j,n,r,c; cin>>t;
    while(t--){
        cin>>j>>n;
        int cnt=0;
        vector<int> box(n);
        for(int i=0;i<n;i++){
            cin>>r>>c;
            box[i] = r*c;
        }

        sort(box.begin(), box.end());

        for(int i=n-1;i>=0;i--){
            j -= box[i];
            cnt+=1;
            if( j <= 0 ) break;
        }
        cout<<cnt<<'\n';

    }


    return 0;
}

