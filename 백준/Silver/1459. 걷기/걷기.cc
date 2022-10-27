#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin); 

    long long x,y,w,s,sum=0; 

    cin>>x>>y>>w>>s;

    if(x<y) swap(x,y);

    sum = (x+y) * w;   

    if((y%2==0&&x%2==0)||(y%2==1&&x%2==1)){
        sum = min(sum, x*s);
    }else{
        sum = min(sum, (x-1)*s + w);
    }

    sum = min(sum, y*s+(x-y)*w);

    cout<<sum;

    return 0;

}
