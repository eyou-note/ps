#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    fastio;
   // freopen("input.txt", "r", stdin);

    int n,g,cnt=0; cin>>n;
    vector<int> tree(n), diff;
    for(int i=0;i<n;i++){
        cin>>tree[i];
    }
    sort(tree.begin(), tree.end());

    for(int i=0;i<n-1;i++){
        diff.push_back(tree[i+1]-tree[i]);
    }

    g = diff[0];
    for(int i=1;i<diff.size();i++){
        g = gcd(g, diff[1]);
    }

    for(int i=0;i<diff.size();i++){
        cnt+=diff[i]/g-1;
    }
    cout<<cnt;



    return 0;
}
