#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define endl "\n"

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b){
    return a*b/gcd(a,b);
}

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    long long l = lcm(b,d);
    long long r1 = (a*l/b)+c*l/d;
  
    cout<<r1/gcd(l,r1)<<' '<<l/gcd(l, r1);



    return 0;
}