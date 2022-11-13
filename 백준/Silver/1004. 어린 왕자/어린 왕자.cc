#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int t; cin>>t;
    int x1,y1,x2,y2,n;
    while(t--){
        cin>>x1>>y1>>x2>>y2>>n;

        int cx,cy,r,d,cnt=0;
        bool inner1, inner2;
        while(n--){
            cin>>cx>>cy>>r;

            d = (cx-x1) * (cx-x1) + (cy-y1) * (cy-y1);
            inner1 = !(d > r * r);

            d = (cx-x2) * (cx-x2) + (cy-y2) * (cy-y2);
            inner2 = !(d > r * r);

            if(inner1!=inner2) cnt+=1;
        }

        cout<<cnt<<endl;

    }

    return 0;

}