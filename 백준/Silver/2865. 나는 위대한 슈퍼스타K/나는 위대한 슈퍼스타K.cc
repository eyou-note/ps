#include <bits/stdc++.h>

#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

using namespace std;

bool cmp(double a, double b){
    return a>b;
}
int main(){
    fastio;
    //freopen("input.txt", "r", stdin);  

    int n,m,k,p;
    cin>>n>>m>>k;
    double in,sum=0;
    vector<double> a(n+1, 0);

    for(int i=0;i<m;i++){
        for(int j=1;j<=n;j++){
            cin>>p>>in;
            a[p] = max(a[p], in);
        }
    }

    sort(a.begin(), a.end(), cmp);

    for(int i=0;i<k;i++){
        sum+=a[i];
    }

    printf("%.1lf", sum);

    return 0;

}
