#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

int main(){
    fastio;
    //freopen("input.txt", "r", stdin);

    int n; cin>>n;
    double mx, cur;
    vector<double> dv(n);

    for(int i=0;i<n;i++){
        cin>>dv[i];
    }

    mx = cur = dv[0];

    for(int i=1;i<n;i++){
        cur = max(cur * dv[i], dv[i]);    //다음거 곱했을때 최대값을 cur에 저장
        mx = max(mx, cur);  //  mx 값 갱신
    }

    printf("%.3lf", mx);

    return 0;
}
